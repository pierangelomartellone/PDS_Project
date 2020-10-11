#include "RegisterWindow.h"
#include "FileExplorerWindow.h"
#include "MyFirstWindow.h"
#include "Controller.h"
#include "qshortcut.h"
#include "qdrag.h"
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <qmimedata.h>
#include <qstring.h>
#include <qresource.h>
#include <qfileinfo.h>


#define IMAGE_DIM 1000


RegisterWindow::RegisterWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//QPixmap pix(":/images/register.png");
	//ui.picture->setPixmap(pix);
	QPalette pal = palette();
	pal.setBrush(QPalette::Window, QPixmap(":/images/Immagine.png"));
	this->setPalette(pal);
	ui.errorDescription->setVisible(true);
	ui.errorDescription->setText("");
	setAcceptDrops(true);

	ui.pushButton->setAutoDefault(true);
	QShortcut *shortcut = new QShortcut(Qt::Key_Return, this);
	QObject::connect(shortcut, SIGNAL(activated()), this, SLOT(on_pushButton_clicked()));
}

RegisterWindow::~RegisterWindow()
{
}

void RegisterWindow::on_pushButton_clicked()
{
	QString username = ui.userText->text();
	QString password = ui.passText->text();
	std::string usernameString = username.toUtf8().constData();
	std::string passwordString = password.toUtf8().constData();

	QPixmap pixmap(myimage);

	int connection = Controller::getInstance().connectSocket();
	if (connection == 0) {
		ui.errorDescription->setText("Sorry, I can't reach my server");
		return;
	}
	int signup = Controller::getInstance().registerUser(usernameString, passwordString);

	if (signup == 1) {
		//Salvo immagine in locale
		std::string path = "./images/_" + usernameString + ".jpg";
		QString pathstr = QString(path.c_str());
		pixmap.save(pathstr);
		//---
		hide();
		FileExplorerWindow *few = new FileExplorerWindow();
		few->show();
		// l'immagine viene settata dopo il costruttore della finestra
		int img = Controller::getInstance().setImage(pixmap);
	}
	else {
		ui.errorDescription->setText("Sorry, you can't sign up with this credentials");
	}

}

void RegisterWindow::on_loginButton_clicked() {
	MyFirstWindow *login = new MyFirstWindow();
	login->show();
	hide();
}


void RegisterWindow::dragEnterEvent(QDragEnterEvent * e)
{
	e->accept();
}

void RegisterWindow::dragLeaveEvent(QDragLeaveEvent *e) {
	e->accept();
}

void RegisterWindow::dragMoveEvent(QDragMoveEvent *e) {
	e->accept();
}

void RegisterWindow::dropEvent(QDropEvent *e) {
	QUrl path;
	QList<QUrl> lista = e->mimeData()->urls();
	if (lista.size() > 1 || lista.size() == 0) {
		ui.pictureDescription->setText("You should load an image, not a folder");
		return;
	}
	else {
		path = lista.at(0);
		QString pathstr = path.toString().right(path.toString().size() - 8);
		ui.pictureDescription->setText("This is your profile picture");
		QFileInfo checkFile(pathstr);

		if (checkFile.exists() && checkFile.isFile()) {
			QResource::registerResource(pathstr);
			QPixmap *nuovaimm = new QPixmap(pathstr);
			int* start = new int;
			QRect* rect = new QRect;
			/*	Clip	*/
			if (nuovaimm->width() > nuovaimm->height()) {
				*start = std::round((nuovaimm->width() - nuovaimm->height()) / 2);
				*rect = QRect(*start, 0, nuovaimm->height(), nuovaimm->height());
			}
			else {
				*start = std::round((nuovaimm->height() - nuovaimm->width()) / 2);
				*rect = QRect(0, *start, nuovaimm->width(), nuovaimm->width());
			}
			QPixmap clipped = nuovaimm->copy(*rect);
			if (clipped.width() > IMAGE_DIM) {
				*start = std::round((clipped.width() - IMAGE_DIM) / 2);
				*rect = QRect(*start, *start, IMAGE_DIM, IMAGE_DIM);
				clipped = clipped.copy(*rect);
			}

			ui.picture->setPixmap(clipped);
			myimage = clipped;
		}

	}
}