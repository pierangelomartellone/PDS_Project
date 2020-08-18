#include <iostream>
#include "QString.h"
#include "MyFirstWindow.h"
#include "Controller.h"
#include "mainwindow.h"
#include <qtimer.h>
#include <FileExplorerWindow.h>
#include <qshortcut.h>
#include <qkeysequence.h>
#include "RegisterWindow.h"


MyFirstWindow::MyFirstWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("Login");
	QPixmap pix(":/images/login.png");
	ui.picture->setPixmap(pix);
	ui.errorDescription->setVisible(true);
	ui.errorDescription->setText("");

	ui.pushButton->setAutoDefault(true);
	QShortcut *shortcut = new QShortcut(Qt::Key_Return, this);
	QObject::connect(shortcut, SIGNAL(activated()), this, SLOT(on_pushButton_clicked()));
}

MyFirstWindow::~MyFirstWindow()
{
}

void MyFirstWindow::on_pushButton_clicked()
{
	QString username = ui.userText->text();
	QString password = ui.passText->text();
	std::string usernameString = username.toUtf8().constData();
	std::string passwordString = password.toUtf8().constData();

	int connection = Controller::getInstance().connectSocket();
	if (connection == 0) {
		ui.errorDescription->setText("Sorry, I can't reach my server");
		return;
	}
	int login = Controller::getInstance().checkLogin(usernameString, passwordString);
	if (login == 1) {
		hide();
		FileExplorerWindow *few = new FileExplorerWindow();
		few->show();
	}
	else {
		ui.errorDescription->setText("Sorry, you typed wrong username or password");
	}	

}

void MyFirstWindow::on_newAccountButton_clicked() {
	RegisterWindow *rw = new RegisterWindow();
	rw->show();
	hide();
}

