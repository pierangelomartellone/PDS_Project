#include "mainwindow.h"
#include "qfiledialog.h"
#include "textedit.h"
#include "Controller.h"
#include "qinputdialog.h"
#include "uri.h"
#include <QMessageBox>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <qmimedata.h>
#include "qfont.h"
#include "qtimer.h"
#include <qresource.h>
#include "Settings.h"


#define IMAGE_DIM 1000

Settings::Settings(QWidget* parent)
	: QWidget(parent)
{

	ui.setupUi(this);

	QFile file(":/darkstyle.qss");
	file.open(QFile::ReadOnly);
	QString styleSheet = QLatin1String(file.readAll());
	QPalette pal = palette();
	pal.setBrush(QPalette::Window, QPixmap(":/images/Immagine.png"));
	ui.lineEdit->setPlaceholderText(Controller::getInstance().getUserName());
	ui.userImage->setPixmap(Controller::getInstance().getUserImage(230, 230));
	setAcceptDrops(true);
	this->setPalette(pal);
	this->setStyleSheet(styleSheet);
	this->ensurePolished();
	file.close();
	
}

Settings::~Settings()
{
}

void Settings::on_editUsernameButton_clicked() {
	QString username = ui.lineEdit->text();
	std::string s = Controller::getInstance().getUserName().toStdString().c_str();
	std::string path = "./images/_" + s + ".jpg";
	QString pathstr = QString(path.c_str());
	QFileInfo checkFile(pathstr);

	
	std::string usernameString = username.toUtf8().constData();
	if (Controller::getInstance().updateUsername(usernameString) == 0) {
		ui.lineEdit->clear();
		ui.lineEdit->setPlaceholderText(username);

		if (checkFile.exists() && checkFile.isFile()) {
			std::string newPath = "./images/_" + usernameString + ".jpg";
			int result = rename(path.c_str(), newPath.c_str());
		}
	}
	else
		ui.errorDescription->setText("Error updating Username");
		ui.errorDescription->show();
}

void Settings::on_editPasswordButton_clicked() {
	QString psw = ui.lineEdit_3->text();
	QString psw_r = ui.lineEdit_4->text();
	std::string pswString = psw.toUtf8().constData();
	if (psw != psw_r) {
		ui.errorDescription->setText("Passwords must be the same!");
		ui.errorDescription->show();
	}

	else {
		if (Controller::getInstance().updatePassword(pswString) == 0) {
			ui.lineEdit_3->clear();
			ui.lineEdit_4->clear();
		}
	}
}

void Settings::dragEnterEvent(QDragEnterEvent* e)
{
	e->accept();
}

void Settings::dragLeaveEvent(QDragLeaveEvent* e) {
	e->accept();
}

void Settings::dragMoveEvent(QDragMoveEvent* e) {
	e->accept();
}

void Settings::dropEvent(QDropEvent* e) {
	QUrl path;
	QList<QUrl> lista = e->mimeData()->urls();
	if (lista.size() > 1 || lista.size() == 0) {
		ui.errorDescription->setText("You should load an image, not a folder");
		return;
	}
	else {
		path = lista.at(0);
		QString pathstr = path.toString().right(path.toString().size() - 8);
		QFileInfo checkFile(pathstr);

		if (checkFile.exists() && checkFile.isFile()) {
			QResource::registerResource(pathstr);
			QPixmap* nuovaimm = new QPixmap(pathstr);
			int* start = new int;
			QRect* rect = new QRect;
			/*	Clip	*/
			if (nuovaimm->width() > nuovaimm->height()) {
				*start = std::round((nuovaimm->width() - nuovaimm->height()) / 10);
				*rect = QRect(*start, 0, nuovaimm->height(), nuovaimm->height());
			}
			else {
				*start = std::round((nuovaimm->height() - nuovaimm->width()) / 10);
				*rect = QRect(0, *start, nuovaimm->width(), nuovaimm->width());
			}
			std::string path = "./images/_" + Controller::getInstance().getUserName().toStdString() + ".jpg";
			QString pathstr = QString(path.c_str());
			nuovaimm->save(pathstr);
			QPixmap clipped = nuovaimm->copy(*rect);
			if (clipped.width() > IMAGE_DIM) {
				*start = std::round((clipped.width() - IMAGE_DIM) / 2);
				*rect = QRect(*start, *start, IMAGE_DIM, IMAGE_DIM);
				clipped = clipped.copy(*rect);
			}
			ui.userImage->setPixmap(clipped);
			myimage = clipped;
		}

	}
}

void Settings::on_pushButton_clicked() {
	FileExplorerWindow* reg = new FileExplorerWindow();
	reg->show();
	hide();
	std::string path = "./images/_" + Controller::getInstance().getUserName().toStdString() + ".jpg";
	QString pathstr = QString(path.c_str());
	QPixmap userimage(pathstr);
	int saveonserver = Controller::getInstance().setImage(userimage);
}
