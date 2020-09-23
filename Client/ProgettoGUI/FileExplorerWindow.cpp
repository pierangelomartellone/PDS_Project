#include "FileExplorerWindow.h"
#include "mainwindow.h"
#include "qfiledialog.h"
#include "textedit.h"
#include "Controller.h"
#include "qinputdialog.h"
#include "uri.h"


FileExplorerWindow::FileExplorerWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QStringList *listafile;
	model = new QStringListModel();
	listafile = new QStringList();
	
	QStringList temp = Controller::getInstance().askForFileList();
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
	uri filename(uritexted.toStdString(), true);
	/* Fare check sulla validità della URI*/
	TextEdit* editor = new TextEdit();
	editor->load(QString::fromStdString(filename.resolveURI()));
	hide();
	editor->show();
	/*-------------------------*/
	//ui.errorDescription->setText("Sorry, you typed a wrong URI");
}
