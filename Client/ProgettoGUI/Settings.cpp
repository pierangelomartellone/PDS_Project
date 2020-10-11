#include "mainwindow.h"
#include "qfiledialog.h"
#include "textedit.h"
#include "Controller.h"
#include "qinputdialog.h"
#include "uri.h"
#include <QMessageBox>
#include "qfont.h"
#include "qtimer.h"
#include "Settings.h"

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
	ui.label_4->setPixmap(Controller::getInstance().getUserImage(230, 230));
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
	std::string usernameString = username.toUtf8().constData();
	if(Controller::getInstance().updateUsername(usernameString)==1)
		ui.lineEdit->setPlaceholderText(username);
}