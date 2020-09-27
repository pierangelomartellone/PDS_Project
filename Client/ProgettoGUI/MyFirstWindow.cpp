#include <iostream>
#include "QString.h"
#include "MyFirstWindow.h"
#include "Controller.h"
#include "mainwindow.h"
#include <qtimer.h>
#include <FileExplorerWindow.h>
#include <qshortcut.h>
#include <qkeysequence.h>
#include <qfile.h>
#include "RegisterWindow.h"

void setColoursLogin(QPalette& palette) {
	// modify palette to dark
	palette.setColor(QPalette::Window, QColor(53, 53, 53));
	palette.setColor(QPalette::WindowText, Qt::white);
	palette.setColor(QPalette::Disabled, QPalette::WindowText,
		QColor(127, 127, 127));
	//palette.setColor(QPalette::Base, QColor(42, 42, 42));
	palette.setColor(QPalette::AlternateBase, QColor(66, 66, 66));
	palette.setColor(QPalette::ToolTipBase, Qt::white);
	palette.setColor(QPalette::ToolTipText, QColor(53, 53, 53));
	palette.setColor(QPalette::Text, Qt::white);
	palette.setColor(QPalette::Disabled, QPalette::Text, QColor(127, 127, 127));
	palette.setColor(QPalette::Dark, QColor(35, 35, 35));
	palette.setColor(QPalette::Shadow, QColor(20, 20, 20));
	palette.setColor(QPalette::Button, QColor(53, 53, 53));
	palette.setColor(QPalette::ButtonText, Qt::white);
	palette.setColor(QPalette::Disabled, QPalette::ButtonText,
		QColor(127, 127, 127));
	palette.setColor(QPalette::BrightText, Qt::red);
	palette.setColor(QPalette::Link, QColor(42, 130, 218));
	palette.setColor(QPalette::Highlight, QColor(42, 130, 218));
	palette.setColor(QPalette::Disabled, QPalette::Highlight, QColor(80, 80, 80));
	palette.setColor(QPalette::HighlightedText, Qt::white);
	palette.setColor(QPalette::Disabled, QPalette::HighlightedText,
		QColor(127, 127, 127));
	palette.setColor(QPalette::Base, Qt::gray);
}

MyFirstWindow::MyFirstWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QFile file(":/darkstyle.qss");
	file.open(QFile::ReadOnly);
	QString styleSheet = QLatin1String(file.readAll());
	QPalette pal = palette();
	setColoursLogin(pal);
	this->setPalette(pal);
	this->setStyleSheet(styleSheet);
	this->ensurePolished();
	file.close();

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

