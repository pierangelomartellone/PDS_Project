#include "FileExplorerWindow.h"
#include "mainwindow.h"
#include "qfiledialog.h"
#include "textedit.h"
#include "Controller.h"
#include "qinputdialog.h"
#include "uri.h"
#include <QMessageBox>
#include "qfont.h"
#include "qtimer.h"

void setColours(QPalette& palette) {
	// modify palette to dark
//	palette.setColor(QPalette::Window, QColor(53, 53, 53));
	palette.setColor(QPalette::WindowText, Qt::white);
	palette.setColor(QPalette::Disabled, QPalette::WindowText,
		QColor(127, 127, 127));
	palette.setColor(QPalette::Base, QColor(42, 42, 42));
	palette.setColor(QPalette::AlternateBase, QColor(66, 66, 66));
	palette.setColor(QPalette::ToolTipBase, Qt::white);
	//palette.setColor(QPalette::ToolTipText, QColor(53, 53, 53));
	palette.setColor(QPalette::Text, Qt::white);
	palette.setColor(QPalette::Disabled, QPalette::Text, QColor(127, 127, 127));
	palette.setColor(QPalette::Dark, QColor(35, 35, 35));
	palette.setColor(QPalette::Shadow, QColor(20, 20, 20));
	//palette.setColor(QPalette::Button, QColor(53, 53, 53));
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


FileExplorerWindow::FileExplorerWindow(QWidget *parent)
	: QWidget(parent)
{

	ui.setupUi(this);

	QFile file(":/darkstyle.qss");
	file.open(QFile::ReadOnly);
	QString styleSheet = QLatin1String(file.readAll());
	QPalette pal = palette();
	setColours(pal);
	this->setPalette(pal);
	this->setStyleSheet(styleSheet);
	this->ensurePolished();
	file.close();

	QStringList *listafile;
	model = new QStringListModel();
	listafile = new QStringList();
	
	temp = Controller::getInstance().askForFileList();
	listafile = &temp;

	model->setStringList(*listafile);
	ui.fileList->setModel(model);
	ui.fileList->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.fileList->setCurrentIndex(model->index(0, 0));

	QPixmap pix(Controller::getInstance().getUserImage(70, 70));
	ui.myimage->setPixmap(pix);

	QString user = Controller::getInstance().getUserName();
	ui.myuserText->setText("Ciao " + user);
}

FileExplorerWindow::~FileExplorerWindow()
{
}

void FileExplorerWindow::on_newFileButton_clicked()
{
	bool ok; 
	QMessageBox msgBox; 
	QInputDialog *Dialog = new QInputDialog();
	Dialog->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	Dialog->setFixedSize(200, 1000);
	Dialog->setMinimumSize(QSize(200, 1000));
	Dialog->setMaximumSize(QSize(200, 1000));
	Dialog->setSizeGripEnabled(false);
	QString filename = Dialog->getText(this, tr("New File"),
		tr("How do I call this new file?"), QLineEdit::Normal,
		tr("newfile"), &ok);

	if (ok && !filename.isEmpty()) {
		for (QString existingfile: temp) {
			if (filename == existingfile)
				QFont myfont("Segoe UI Bold", 25);
				QLabel* qPopup = new QLabel(QString::fromLatin1("A file with the same name already exists"), 
					this, Qt::SplashScreen | Qt::WindowStaysOnTopHint);
				QPalette qPalette = qPopup->palette();
				qPalette.setBrush(QPalette::Background, QColor(255, 0, 0));
				qPalette.setColor(QPalette::WindowText, Qt::white);
				qPopup->setPalette(qPalette);
				//qPopup->setFont(myfont);
				qPalette.setBrush(QPalette::BrightText, QColor(255, 255, 255));
				qPopup->setFrameStyle(QLabel::Raised | QLabel::Panel);
				qPopup->setAlignment(Qt::AlignCenter);
				qPopup->setFixedSize(300, 100);
				qPopup->show();
				// setup timer
				QTimer::singleShot(3000, qPopup, &QLabel::hide);
				return;
		}
		filename += ".txt";
		TextEdit *editor = new TextEdit();
		editor->loadnew(filename);
		hide();
		editor->show();
	}

}

void FileExplorerWindow::on_loadFileButton_clicked()
{
	QModelIndex index = ui.fileList->currentIndex();
	QString filename = index.data(Qt::DisplayRole).toString();

	TextEdit *editor = new TextEdit();
	editor->load(filename);
	hide();
	editor->show();
}
void FileExplorerWindow::on_loadFileURIButton_clicked()
{
	bool ok;
	/*-------CONTROLLARE-------*/
	QString uritexted = ui.URILineEdit->text();
	uritexted = uritexted.mid(14, -1);
	uri filename(uritexted.toStdString(), true);
	qDebug() << uritexted;
	/* Fare check sulla validità della URI*/
	TextEdit* editor = new TextEdit();
	editor->load(QString::fromStdString(filename.resolveURI()));
	hide();
	editor->show();
	/*-------------------------*/
	//ui.errorDescription->setText("Sorry, you typed a wrong URI");
}


