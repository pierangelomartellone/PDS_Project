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
			QRect rect(0, 0, IMAGE_DIM, IMAGE_DIM);
			QPixmap cropped = nuovaimm->copy(rect);
			ui.picture->setPixmap(*nuovaimm);
			myimage = cropped;
		}

	}
}