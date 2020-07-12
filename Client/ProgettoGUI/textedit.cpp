#include <QAction>
#include <QApplication>
#include <QClipboard>
#include <QColorDialog>
#include <QComboBox>
#include <QFontComboBox>
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QFontDatabase>
#include <QMenu>
#include <QMenuBar>
#include <QTextCodec>
#include <QTextEdit>
#include <QStatusBar>
#include <QToolBar>
#include <QTextCursor>
#include <QTextDocumentWriter>
#include <QTextList>
#include <QtDebug>
#include <QCloseEvent>
#include "FileExplorerWindow.h"
#include <QMessageBox>
#include <QMimeData>
#include <Serialize.h>
#include "Message.h"
#include "Controller.h"
#include <qtimer.h>
#include <thread>
#define ICON_DIM 50
#define COMBO_DIM 30
#define TIMER_TIME 10000
#define MAXUSER 100


#if defined(QT_PRINTSUPPORT_LIB)
#include <QtPrintSupport/qtprintsupportglobal.h>
#if QT_CONFIG(printer)
#if QT_CONFIG(printdialog)
#include <QPrintDialog>
#endif
#include <QPrinter>
#if QT_CONFIG(printpreviewdialog)
#include <QPrintPreviewDialog>
#endif
#endif
#endif

#include "textedit.h"

const QString rsrcPath = ":/images/";

TextEdit::TextEdit(QWidget *parent)
	: QMainWindow(parent)
{
#ifdef Q_OS_OSX
	setUnifiedTitleAndToolBarOnMac(true);
#endif
	setWindowTitle(QCoreApplication::applicationName());

	textEdit = new QTextEdit(this);

	// ORDER is important here!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	connect(textEdit, &QTextEdit::currentCharFormatChanged, this, &TextEdit::currentCharFormatChanged);
	connect(textEdit, &QTextEdit::textChanged, this, &TextEdit::textChanged);
	connect(textEdit, &QTextEdit::cursorPositionChanged, this, &TextEdit::cursorPositionChanged);
	connect(&Controller::getInstance(), &Controller::textupdatefromserver,this, &TextEdit::updateText);
	connect(&Controller::getInstance(), &Controller::newuserconnected, this, &TextEdit::addUserToToolbar);
	connect(&Controller::getInstance(), &Controller::userwriting, this, &TextEdit::addUserToToolbarWriting);
	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	setCentralWidget(textEdit);
	writingFlag.reserve(MAXUSER);
	for (int i = 0; i < MAXUSER; i++) {
		writingFlag.append(false);
	}

	setToolButtonStyle(Qt::ToolButtonFollowStyle);
	setupFileActions();
	setupEditActions();
	setupTextActions();

	{
		QMenu *helpMenu = menuBar()->addMenu(tr("Help"));
		helpMenu->addAction(tr("About"), this, &TextEdit::about);
		helpMenu->addAction(tr("About &Qt"), qApp, &QApplication::aboutQt);
		helpMenu->menuAction()->setVisible(false);
	}

	QFont textFont("Segoe UI Semilight");
	textFont.setStyleHint(QFont::SansSerif);
	textFont.setPointSize(20);
	textEdit->setFont(textFont);
	fontChanged(textEdit->font());
	colorChanged(textEdit->textColor());
	alignmentChanged(textEdit->alignment());

	connect(textEdit->document(), &QTextDocument::modificationChanged,
		actionSave, &QAction::setEnabled);
	connect(textEdit->document(), &QTextDocument::modificationChanged,
		this, &QWidget::setWindowModified);
	connect(textEdit->document(), &QTextDocument::undoAvailable,
		actionUndo, &QAction::setEnabled);
	connect(textEdit->document(), &QTextDocument::redoAvailable,
		actionRedo, &QAction::setEnabled);

	setWindowModified(textEdit->document()->isModified());
	actionSave->setEnabled(textEdit->document()->isModified());
	actionUndo->setEnabled(textEdit->document()->isUndoAvailable());
	actionRedo->setEnabled(textEdit->document()->isRedoAvailable());

	lastCursor = 0;

#ifndef QT_NO_CLIPBOARD
	actionCut->setEnabled(false);
	connect(textEdit, &QTextEdit::copyAvailable, actionCut, &QAction::setEnabled);
	actionCopy->setEnabled(false);
	connect(textEdit, &QTextEdit::copyAvailable, actionCopy, &QAction::setEnabled);

	connect(QApplication::clipboard(), &QClipboard::dataChanged, this, &TextEdit::clipboardDataChanged);
#endif

	textEdit->setFocus();

#ifdef Q_OS_MACOS
	// Use dark text on light background on macOS, also in dark mode.
	QPalette pal = textEdit->palette();
	pal.setColor(QPalette::Base, QColor(Qt::white));
	pal.setColor(QPalette::Text, QColor(Qt::black));
	textEdit->setPalette(pal);
#endif

	int h = 800; int w = 1200;
	this->resize(w, h); // initial size
	this->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

}

void TextEdit::closeEvent(QCloseEvent *e)
{
	Controller::getInstance().closeFile(fileName);
	return;
}

void TextEdit::setupFileActions()
{
	QToolBar *tb = addToolBar(tr("File Actions"));
	QMenu *menu = menuBar()->addMenu(tr("&File"));
	QSize size(ICON_DIM, ICON_DIM);
	tb->setIconSize(size);

	const QIcon newIcon = QIcon::fromTheme("document-new", QIcon(rsrcPath + "/new.png"));
	QAction *a = menu->addAction(newIcon, tr("&New"), this, &TextEdit::fileNew);
	tb->addAction(a);
	a->setPriority(QAction::LowPriority);
	a->setShortcut(QKeySequence::New);

	const QIcon openIcon = QIcon::fromTheme("document-open", QIcon(rsrcPath + "/open.png"));
	a = menu->addAction(openIcon, tr("&Open..."), this, &TextEdit::fileOpen);
	a->setShortcut(QKeySequence::Open);
	tb->addAction(a);

	menu->addSeparator();

	const QIcon saveIcon = QIcon::fromTheme("document-save", QIcon(rsrcPath + "/save.png"));
	actionSave = menu->addAction(saveIcon, tr("&Save"), this, &TextEdit::fileSave);
	actionSave->setShortcut(QKeySequence::Save);
	actionSave->setEnabled(false);
	tb->addAction(actionSave);

	a = menu->addAction(tr("Save &As..."), this, &TextEdit::fileSaveAs);
	a->setPriority(QAction::LowPriority);
	menu->addSeparator();

#ifndef QT_NO_PRINTER
	const QIcon printIcon = QIcon::fromTheme("document-print", QIcon(rsrcPath + "/print.png"));
	a = menu->addAction(printIcon, tr("&Print..."), this, &TextEdit::filePrint);
	a->setPriority(QAction::LowPriority);
	a->setShortcut(QKeySequence::Print);
	tb->addAction(a);

	const QIcon filePrintIcon = QIcon::fromTheme("fileprint", QIcon(rsrcPath + "/print.png"));
	menu->addAction(filePrintIcon, tr("Print Preview..."), this, &TextEdit::filePrintPreview);

	const QIcon exportPdfIcon = QIcon::fromTheme("exportpdf", QIcon(rsrcPath + "/exportpdf.png"));
	a = menu->addAction(exportPdfIcon, tr("&Export PDF..."), this, &TextEdit::filePrintPdf);
	a->setPriority(QAction::LowPriority);
	a->setShortcut(Qt::CTRL + Qt::Key_D);
	tb->addAction(a);

	menu->addSeparator();
#endif

	a = menu->addAction(tr("&Quit"), this, &QWidget::close);
	a->setShortcut(Qt::CTRL + Qt::Key_Q);
	
	menu->menuAction()->setVisible(false);
}

void TextEdit::setupEditActions()
{
	QToolBar *tb = addToolBar(tr("Edit Actions"));
	QMenu *menu = menuBar()->addMenu(tr("&Edit"));
	QSize size(ICON_DIM, ICON_DIM);
	tb->setIconSize(size);

	const QIcon undoIcon = QIcon::fromTheme("edit-undo", QIcon(rsrcPath + "/undo.png"));
	actionUndo = menu->addAction(undoIcon, tr("&Undo"), textEdit, &QTextEdit::undo);
	actionUndo->setShortcut(QKeySequence::Undo);
	tb->addAction(actionUndo);

	const QIcon redoIcon = QIcon::fromTheme("edit-redo", QIcon(rsrcPath + "/redo.png"));
	actionRedo = menu->addAction(redoIcon, tr("&Redo"), textEdit, &QTextEdit::redo);
	actionRedo->setPriority(QAction::LowPriority);
	actionRedo->setShortcut(QKeySequence::Redo);
	tb->addAction(actionRedo);
	menu->addSeparator();

#ifndef QT_NO_CLIPBOARD
	const QIcon cutIcon = QIcon::fromTheme("edit-cut", QIcon(rsrcPath + "/cut.png"));
	actionCut = menu->addAction(cutIcon, tr("Cu&t"), textEdit, &QTextEdit::cut);
	actionCut->setPriority(QAction::LowPriority);
	actionCut->setShortcut(QKeySequence::Cut);
	tb->addAction(actionCut);

	const QIcon copyIcon = QIcon::fromTheme("edit-copy", QIcon(rsrcPath + "/copy.png"));
	actionCopy = menu->addAction(copyIcon, tr("&Copy"), textEdit, &QTextEdit::copy);
	actionCopy->setPriority(QAction::LowPriority);
	actionCopy->setShortcut(QKeySequence::Copy);
	tb->addAction(actionCopy);

	const QIcon pasteIcon = QIcon::fromTheme("edit-paste", QIcon(rsrcPath + "/paste.png"));
	actionPaste = menu->addAction(pasteIcon, tr("&Paste"), textEdit, &QTextEdit::paste);
	actionPaste->setPriority(QAction::LowPriority);
	actionPaste->setShortcut(QKeySequence::Paste);
	tb->addAction(actionPaste);
	if (const QMimeData *md = QApplication::clipboard()->mimeData())
		actionPaste->setEnabled(md->hasText());
#endif

	menu->menuAction()->setVisible(false);

}

void TextEdit::setupTextActions()
{
	tb = addToolBar(tr("Format Actions"));
	QMenu *menu = menuBar()->addMenu(tr("F&ormat"));
	QSize size(ICON_DIM, ICON_DIM);
	tb->setIconSize(size);

	const QIcon boldIcon = QIcon::fromTheme("format-text-bold", QIcon(rsrcPath + "/bold.png"));
	actionTextBold = menu->addAction(boldIcon, tr("&Bold"), this, &TextEdit::textBold);
	actionTextBold->setShortcut(Qt::CTRL + Qt::Key_B);
	actionTextBold->setPriority(QAction::LowPriority);
	QFont bold;
	bold.setBold(true);
	actionTextBold->setFont(bold);
	tb->addAction(actionTextBold);
	actionTextBold->setCheckable(true);

	const QIcon italicIcon = QIcon::fromTheme("format-text-italic", QIcon(rsrcPath + "/italic.png"));
	actionTextItalic = menu->addAction(italicIcon, tr("&Italic"), this, &TextEdit::textItalic);
	actionTextItalic->setPriority(QAction::LowPriority);
	actionTextItalic->setShortcut(Qt::CTRL + Qt::Key_I);
	QFont italic;
	italic.setItalic(true);
	actionTextItalic->setFont(italic);
	tb->addAction(actionTextItalic);
	actionTextItalic->setCheckable(true);

	const QIcon underlineIcon = QIcon::fromTheme("format-text-underline", QIcon(rsrcPath + "/underline.png"));
	actionTextUnderline = menu->addAction(underlineIcon, tr("&Underline"), this, &TextEdit::textUnderline);
	actionTextUnderline->setShortcut(Qt::CTRL + Qt::Key_U);
	actionTextUnderline->setPriority(QAction::LowPriority);
	QFont underline;
	underline.setUnderline(true);
	actionTextUnderline->setFont(underline);
	tb->addAction(actionTextUnderline);
	actionTextUnderline->setCheckable(true);

	menu->addSeparator();

	const QIcon leftIcon = QIcon::fromTheme("format-justify-left", QIcon(rsrcPath + "/textleft.png"));
	actionAlignLeft = new QAction(leftIcon, tr("&Left"), this);
	actionAlignLeft->setShortcut(Qt::CTRL + Qt::Key_L);
	actionAlignLeft->setCheckable(true);
	actionAlignLeft->setPriority(QAction::LowPriority);
	const QIcon centerIcon = QIcon::fromTheme("format-justify-center", QIcon(rsrcPath + "/textcenter.png"));
	actionAlignCenter = new QAction(centerIcon, tr("C&enter"), this);
	actionAlignCenter->setShortcut(Qt::CTRL + Qt::Key_E);
	actionAlignCenter->setCheckable(true);
	actionAlignCenter->setPriority(QAction::LowPriority);
	const QIcon rightIcon = QIcon::fromTheme("format-justify-right", QIcon(rsrcPath + "/textright.png"));
	actionAlignRight = new QAction(rightIcon, tr("&Right"), this);
	actionAlignRight->setShortcut(Qt::CTRL + Qt::Key_R);
	actionAlignRight->setCheckable(true);
	actionAlignRight->setPriority(QAction::LowPriority);
	const QIcon fillIcon = QIcon::fromTheme("format-justify-fill", QIcon(rsrcPath + "/textjustify.png"));
	actionAlignJustify = new QAction(fillIcon, tr("&Justify"), this);
	actionAlignJustify->setShortcut(Qt::CTRL + Qt::Key_J);
	actionAlignJustify->setCheckable(true);
	actionAlignJustify->setPriority(QAction::LowPriority);

	// Make sure the alignLeft  is always left of the alignRight
	QActionGroup *alignGroup = new QActionGroup(this);
	connect(alignGroup, &QActionGroup::triggered, this, &TextEdit::textAlign);

	if (QApplication::isLeftToRight()) {
		alignGroup->addAction(actionAlignLeft);
		alignGroup->addAction(actionAlignCenter);
		alignGroup->addAction(actionAlignRight);
	}
	else {
		alignGroup->addAction(actionAlignRight);
		alignGroup->addAction(actionAlignCenter);
		alignGroup->addAction(actionAlignLeft);
	}
	alignGroup->addAction(actionAlignJustify);

	tb->addActions(alignGroup->actions());
	menu->addActions(alignGroup->actions());

	menu->addSeparator();

	QPixmap pix(16, 16);
	pix.fill(Qt::black);
	actionTextColor = menu->addAction(pix, tr("&Color..."), this, &TextEdit::textColor);
	tb->addAction(actionTextColor);

	menu->addSeparator();

	const QIcon shareLinkIcon = QIcon::fromTheme("sharing-link", QIcon(rsrcPath + "/share.png"));
	//actionTextUnderline = menu->addAction(underlineIcon, tr("&Underline"), this, &TextEdit::textUnderline);
	//actionTextUnderline->setShortcut(Qt::CTRL + Qt::Key_U);
	//actionTextUnderline->setPriority(QAction::LowPriority);

	tb = addToolBar(tr("Format Actions"));
	tb->setAllowedAreas(Qt::TopToolBarArea | Qt::BottomToolBarArea);
	addToolBarBreak(Qt::TopToolBarArea);
	addToolBar(tb);

	menu->menuAction()->setVisible(false);

	// --------------------------------------------- BARRA SOTTO
	comboStyle = new QComboBox(tb);
	comboStyle->setFixedHeight(COMBO_DIM);
	//tb->addWidget(comboStyle);
	comboStyle->addItem("Standard");
	comboStyle->addItem("Bullet List (Disc)");
	comboStyle->addItem("Bullet List (Circle)");
	comboStyle->addItem("Bullet List (Square)");
	comboStyle->addItem("Ordered List (Decimal)");
	comboStyle->addItem("Ordered List (Alpha lower)");
	comboStyle->addItem("Ordered List (Alpha upper)");
	comboStyle->addItem("Ordered List (Roman lower)");
	comboStyle->addItem("Ordered List (Roman upper)");
	comboStyle->addItem("Heading 1");
	comboStyle->addItem("Heading 2");
	comboStyle->addItem("Heading 3");
	comboStyle->addItem("Heading 4");
	comboStyle->addItem("Heading 5");
	comboStyle->addItem("Heading 6");

	//connect(comboStyle, QOverload<int>::of(&QComboBox::activated), this, &TextEdit::textStyle);
	comboStyle->setVisible(false);
	tb->addSeparator();

	comboFont = new QFontComboBox(tb);
	comboFont->setFixedHeight(COMBO_DIM);
	tb->addWidget(comboFont);
	connect(comboFont, QOverload<const QString &>::of(&QComboBox::activated), this, &TextEdit::textFamily);

	tb->addSeparator();

	comboSize = new QComboBox(tb);
	comboSize->setFixedHeight(COMBO_DIM);
	comboSize->setObjectName("comboSize");
	tb->addWidget(comboSize);
	comboSize->setEditable(true);

	const QList<int> standardSizes = QFontDatabase::standardSizes();
	for (int size : standardSizes)
		comboSize->addItem(QString::number(size));

	tb->addSeparator();

	QWidget *spacerWidget = new QWidget(this);
	spacerWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
	spacerWidget->setVisible(true);
	tb->addWidget(spacerWidget);

	//IMG
	QLabel* img = new QLabel();
	QPixmap *miniatura = new QPixmap(Controller::getInstance().getUserImage(40, 40));
	img->setPixmap(*miniatura);

	tb->addWidget(img);
	QString testo("Ciao " + Controller::getInstance().getUserName() + " ");
	QLabel *nome = new QLabel(testo);
	QFont f("Segoe UI", 9);
	nome->setFont(f);
	tb->addSeparator();
	tb->addWidget(nome);

	comboSize->setCurrentIndex(standardSizes.indexOf(QApplication::font().pointSize()));

	connect(comboSize, QOverload<const QString &>::of(&QComboBox::activated), this, &TextEdit::textSize);
	tb->setFixedHeight(40);

}

void TextEdit::addUserToToolbar(int id) 
// option 1 per sta scrivendo, option 0 per è connesso
{ 
	int option = 0;
	QString name = Controller::getInstance().getNameFromID(id);
	writingFlag[id] = false;
	
	//IMG
	QLabel* img = new QLabel();
	QPixmap *miniatura = new QPixmap();
	miniatura->load("./images/defaultpic.jpg");
	QPixmap& scaledmin = miniatura->scaled(40, 40, Qt::KeepAspectRatio, Qt::SmoothTransformation);
	img->setPixmap(scaledmin);
	QAction *a = tb->addWidget(img);

	QString testo;
	testo = name + " connected ";

	QLabel *nome = new QLabel(testo);
	QFont f("Segoe UI", 9);
	nome->setFont(f);
	QAction *b = tb->addWidget(nome);

	QTimer::singleShot(3000, this, [=]() { tb->removeAction(a); tb->removeAction(b); });
}

void TextEdit::addUserToToolbarWriting(int id)
// option 1 per sta scrivendo, option 0 per è connesso
{
	int option = 1;
	QString name = Controller::getInstance().getNameFromID(id);
	if (writingFlag[id] == true) return;
	
	//IMG
	QLabel* img = new QLabel();
	QPixmap *miniatura = new QPixmap();
	miniatura->load("./images/defaultpic.jpg");
	QPixmap& scaledmin = miniatura->scaled(40, 40, Qt::KeepAspectRatio, Qt::SmoothTransformation);
	img->setPixmap(scaledmin);
	QAction *a = tb->addWidget(img);

	QString testo;
	testo = name + " is writing..";

	QLabel *nome = new QLabel(testo);
	QFont f("Segoe UI", 9);
	nome->setFont(f);
	QAction *b = tb->addWidget(nome);
	writingFlag[id] = true;

	QTimer::singleShot(500, this, [=]() 
	{ tb->removeAction(a); tb->removeAction(b); writingFlag[id] = false;});
}

bool TextEdit::load(const QString &f)
{
	//if (!QFile::exists(f))
	//	return false;
	//QFile file(f);
	//if (!file.open(QFile::ReadOnly))
	//	return false;

	//QByteArray data = file.readAll();
	//QTextCodec *codec = Qt::codecForHtml(data);
	//QString str = codec->toUnicode(data);
	//if (Qt::mightBeRichText(str)) {
	//	textEdit->setHtml(str);
	//}
	//else {
	//	str = QString::fromLocal8Bit(data);
	//	textEdit->setPlainText(str);
	//}

	setCurrentFileName(f);
	Controller::getInstance().openFile(f.toStdString());
	setSavingTimer();
	updateTextAll();
	updateCursor(-1);

	Controller::getInstance().setReadyForCRDT(true);

	return true;
}

bool TextEdit::loadnew(const QString &f)
{
	//if (!QFile::exists(f))
	//	return false;
	//QFile file(f);
	//if (!file.open(QFile::ReadOnly))
	//	return false;

	//QByteArray data = file.readAll();
	//QTextCodec *codec = Qt::codecForHtml(data);
	//QString str = codec->toUnicode(data);
	//if (Qt::mightBeRichText(str)) {
	//	textEdit->setHtml(str);
	//}
	//else {
	//	str = QString::fromLocal8Bit(data);
	//	textEdit->setPlainText(str);
	//}

	setCurrentFileName(f);
	Controller::getInstance().newFile(f.toStdString());
	setSavingTimer();
	updateTextAll();
	updateCursor(-1);

	Controller::getInstance().setReadyForCRDT(true);

	return true;
}

bool TextEdit::maybeSave()
{
	if (!textEdit->document()->isModified())
		return true;

	const QMessageBox::StandardButton ret =
		QMessageBox::warning(this, QCoreApplication::applicationName(),
			tr("The document has been modified.\n"
				"Do you want to save your changes?"),
			QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
	if (ret == QMessageBox::Save)
		return fileSave();
	else if (ret == QMessageBox::Cancel)
		return false;
	return true;
}

void TextEdit::setCurrentFileName(const QString &fileName)
{
	this->fileName = fileName;
	textEdit->document()->setModified(false);

	QString shownName;
	if (fileName.isEmpty())
		shownName = "newfile.txt";
	else
		shownName = QFileInfo(fileName).fileName();

	setWindowTitle(tr("%1[*] - %2").arg(shownName, QCoreApplication::applicationName()));
	setWindowModified(false);
}

void TextEdit::fileNew()
{
	if (maybeSave()) {
		textEdit->clear();
		setCurrentFileName(QString());
	}
}

void TextEdit::fileOpen()
{
	FileExplorerWindow *few = new FileExplorerWindow();
	few->show();
}

bool TextEdit::fileSave()
{
	QFont myfont("Segoe UI Semilight", 15);
	QLabel *qPopup = new QLabel(QString::fromLatin1("Non ti preoccupare,\n salvo da solo ;)"), this, Qt::SplashScreen | Qt::WindowStaysOnTopHint);
	QPalette qPalette = qPopup->palette();
	qPalette.setBrush(QPalette::Background, QColor(142, 203, 248));
	qPalette.setColor(QPalette::WindowText, Qt::white);
	qPopup->setPalette(qPalette);
	qPopup->setFont(myfont);
	qPalette.setBrush(QPalette::BrightText, QColor(255, 255, 255));
	qPopup->setFrameStyle(QLabel::Raised | QLabel::Panel);
	qPopup->setAlignment(Qt::AlignCenter);
	qPopup->setFixedSize(300, 100);
	qPopup->show();
	// setup timer
	QTimer::singleShot(3000, qPopup, &QLabel::hide);

	Controller::getInstance().saveFile(this->fileName.toStdString());

	//updateText();
	return true;
	//	return fileSaveAs();
	//if (fileName.startsWith(QStringLiteral(":/")))
	//	return fileSaveAs();

	//QTextDocumentWriter writer(fileName);
	//bool success = writer.write(textEdit->document());
	//if (success) {
	//	textEdit->document()->setModified(false);
	//	statusBar()->showMessage(tr("Wrote \"%1\"").arg(QDir::toNativeSeparators(fileName)));
	//}
	//else {
	//	statusBar()->showMessage(tr("Could not write to file \"%1\"")
	//		.arg(QDir::toNativeSeparators(fileName)));
	//}
	//return success;
}

bool TextEdit::fileSaveAs()
{
	QFileDialog fileDialog(this, tr("Save as..."));
	fileDialog.setAcceptMode(QFileDialog::AcceptSave);
	QStringList mimeTypes;
	mimeTypes << "application/vnd.oasis.opendocument.text" << "text/html" << "text/plain";
	fileDialog.setMimeTypeFilters(mimeTypes);
	fileDialog.setDefaultSuffix("odt");
	if (fileDialog.exec() != QDialog::Accepted)
		return false;
	const QString fn = fileDialog.selectedFiles().first();
	setCurrentFileName(fn);
	return fileSave();
}

void TextEdit::filePrint()
{
#if QT_CONFIG(printdialog)
	QPrinter printer(QPrinter::HighResolution);
	QPrintDialog *dlg = new QPrintDialog(&printer, this);
	if (textEdit->textCursor().hasSelection())
		dlg->addEnabledOption(QAbstractPrintDialog::PrintSelection);
	dlg->setWindowTitle(tr("Print Document"));
	if (dlg->exec() == QDialog::Accepted)
		textEdit->print(&printer);
	delete dlg;
#endif
}

void TextEdit::filePrintPreview()
{
#if QT_CONFIG(printpreviewdialog)
	QPrinter printer(QPrinter::HighResolution);
	QPrintPreviewDialog preview(&printer, this);
	connect(&preview, &QPrintPreviewDialog::paintRequested, this, &TextEdit::printPreview);
	preview.exec();
#endif
}

void TextEdit::printPreview(QPrinter *printer)
{
#ifdef QT_NO_PRINTER
	Q_UNUSED(printer);
#else
	textEdit->print(printer);
#endif
}

void TextEdit::filePrintPdf()
{
#ifndef QT_NO_PRINTER
	QFileDialog fileDialog(this, tr("Export PDF"));
	fileDialog.setAcceptMode(QFileDialog::AcceptSave);
	fileDialog.setMimeTypeFilters(QStringList("application/pdf"));
	fileDialog.setDefaultSuffix("pdf");
	if (fileDialog.exec() != QDialog::Accepted)
		return;
	QString fileName = fileDialog.selectedFiles().first();
	QPrinter printer(QPrinter::HighResolution);
	printer.setOutputFormat(QPrinter::PdfFormat);
	printer.setOutputFileName(fileName);
	textEdit->document()->print(&printer);
	statusBar()->showMessage(tr("Exported \"%1\"")
		.arg(QDir::toNativeSeparators(fileName)));
#endif
}

void TextEdit::textBold()
{
	QTextCharFormat fmt;
	fmt.setFontWeight(actionTextBold->isChecked() ? QFont::Bold : QFont::Normal);
	mergeFormatOnWordOrSelection(fmt);
}

void TextEdit::textUnderline()
{
	QTextCharFormat fmt;
	fmt.setFontUnderline(actionTextUnderline->isChecked());
	mergeFormatOnWordOrSelection(fmt);
}

void TextEdit::textItalic()
{
	QTextCharFormat fmt;
	fmt.setFontItalic(actionTextItalic->isChecked());
	mergeFormatOnWordOrSelection(fmt);
}

void TextEdit::textFamily(const QString &f)
{
	QTextCharFormat fmt;
	fmt.setFontFamily(f);
	mergeFormatOnWordOrSelection(fmt);
}

void TextEdit::textSize(const QString &p)
{
	qreal pointSize = p.toFloat();
	if (p.toFloat() > 0) {
		QTextCharFormat fmt;
		fmt.setFontPointSize(pointSize);
		mergeFormatOnWordOrSelection(fmt);
	}
}

void TextEdit::textStyle(int styleIndex)
{
	QTextCursor cursor = textEdit->textCursor();
	QTextListFormat::Style style = QTextListFormat::ListStyleUndefined;

	switch (styleIndex) {
	case 1:
		style = QTextListFormat::ListDisc;
		break;
	case 2:
		style = QTextListFormat::ListCircle;
		break;
	case 3:
		style = QTextListFormat::ListSquare;
		break;
	case 4:
		style = QTextListFormat::ListDecimal;
		break;
	case 5:
		style = QTextListFormat::ListLowerAlpha;
		break;
	case 6:
		style = QTextListFormat::ListUpperAlpha;
		break;
	case 7:
		style = QTextListFormat::ListLowerRoman;
		break;
	case 8:
		style = QTextListFormat::ListUpperRoman;
		break;
	default:
		break;
	}

	cursor.beginEditBlock();

	QTextBlockFormat blockFmt = cursor.blockFormat();

	if (style == QTextListFormat::ListStyleUndefined) {
		blockFmt.setObjectIndex(-1);
		int headingLevel = styleIndex >= 9 ? styleIndex - 9 + 1 : 0; // H1 to H6, or Standard
		blockFmt.setHeadingLevel(headingLevel);
		cursor.setBlockFormat(blockFmt);

		int sizeAdjustment = headingLevel ? 4 - headingLevel : 0; // H1 to H6: +3 to -2
		QTextCharFormat fmt;
		fmt.setFontWeight(headingLevel ? QFont::Bold : QFont::Normal);
		fmt.setProperty(QTextFormat::FontSizeAdjustment, sizeAdjustment);
		cursor.select(QTextCursor::LineUnderCursor);
		cursor.mergeCharFormat(fmt);
		textEdit->mergeCurrentCharFormat(fmt);
	}
	else {
		QTextListFormat listFmt;
		if (cursor.currentList()) {
			listFmt = cursor.currentList()->format();
		}
		else {
			listFmt.setIndent(blockFmt.indent() + 1);
			blockFmt.setIndent(0);
			cursor.setBlockFormat(blockFmt);
		}
		listFmt.setStyle(style);
		cursor.createList(listFmt);
	}

	cursor.endEditBlock();
}

void TextEdit::textColor()
{
	QColor col = QColorDialog::getColor(textEdit->textColor(), this);
	if (!col.isValid())
		return;
	QTextCharFormat fmt;
	fmt.setForeground(col);
	mergeFormatOnWordOrSelection(fmt);
	colorChanged(col);
}

int TextEdit::getAlignmentCode(Qt::Alignment align) {
	if (align == Qt::AlignLeft)
		return 1;
	else if (align == Qt::AlignHCenter)
		return 4;
	else if (align == Qt::AlignRight)
		return 2;
	else if (align == Qt::AlignJustify)
		return 8;
	else if (align == 18)
		return 2;
}

void TextEdit::textAlign(QAction *a)
{
	cursorMovefromAlignement = true;
	if (a == actionAlignLeft)
		textEdit->setAlignment(Qt::AlignLeft | Qt::AlignAbsolute);
	else if (a == actionAlignCenter)
		textEdit->setAlignment(Qt::AlignHCenter);
	else if (a == actionAlignRight)
		textEdit->setAlignment(Qt::AlignRight | Qt::AlignAbsolute);
	else if (a == actionAlignJustify)
		textEdit->setAlignment(Qt::AlignJustify);

	enableAlignment();
}

void TextEdit::enableAlignment() {
	char vuota = 255;
	QTextCursor currentCursor = textEdit->textCursor();
	int newpos = findEndBlock(currentCursor.position());
	currentCursor.setPosition(newpos, QTextCursor::MoveAnchor);
	lastCursor = currentCursor.position();
	currentCursor.insertText(QString(vuota));
}

int TextEdit::findEndBlock(int pos) {
	// in realtà andrebbe messo all'inizio.
	QString testo = textEdit->toPlainText();
	for (int i = pos; i < testo.length(); i++) {
		if (testo[i] == '\n') {
			return i;
		}
	}
	return testo.length();
}

void TextEdit::currentCharFormatChanged(const QTextCharFormat &format)
{
	fontChanged(format.font());
	colorChanged(format.foreground().color());
}

void TextEdit::cursorPositionChanged()
{
	alignmentChanged(textEdit->alignment());
	QTextList *list = textEdit->textCursor().currentList();
	if (list) {
		switch (list->format().style()) {
		case QTextListFormat::ListDisc:
			comboStyle->setCurrentIndex(1);
			break;
		case QTextListFormat::ListCircle:
			comboStyle->setCurrentIndex(2);
			break;
		case QTextListFormat::ListSquare:
			comboStyle->setCurrentIndex(3);
			break;
		case QTextListFormat::ListDecimal:
			comboStyle->setCurrentIndex(4);
			break;
		case QTextListFormat::ListLowerAlpha:
			comboStyle->setCurrentIndex(5);
			break;
		case QTextListFormat::ListUpperAlpha:
			comboStyle->setCurrentIndex(6);
			break;
		case QTextListFormat::ListLowerRoman:
			comboStyle->setCurrentIndex(7);
			break;
		case QTextListFormat::ListUpperRoman:
			comboStyle->setCurrentIndex(8);
			break;
		default:
			comboStyle->setCurrentIndex(-1);
			break;
		}
	}
	else {
		int headingLevel = textEdit->textCursor().blockFormat().headingLevel();
		comboStyle->setCurrentIndex(headingLevel ? headingLevel + 8 : 0);
	}

	updateCursorSAFE();
}

void TextEdit::clipboardDataChanged()
{
#ifndef QT_NO_CLIPBOARD
	if (const QMimeData *md = QApplication::clipboard()->mimeData())
		actionPaste->setEnabled(md->hasText());
#endif
}

void TextEdit::about()
{
	QMessageBox::about(this, tr("About"), tr("This example demonstrates Qt's "
		"rich text editing facilities in action, providing an example "
		"document for you to experiment with."));
}

void TextEdit::mergeFormatOnWordOrSelection(const QTextCharFormat &format)
{
	QTextCursor cursor = textEdit->textCursor();
	if (!cursor.hasSelection())
		//cursor.select(QTextCursor::WordUnderCursor);
	cursor.mergeCharFormat(format);
	textEdit->mergeCurrentCharFormat(format);
}

void TextEdit::fontChanged(const QFont &f)
{
	comboFont->setCurrentIndex(comboFont->findText(QFontInfo(f).family()));
	comboSize->setCurrentIndex(comboSize->findText(QString::number(f.pointSize())));
	actionTextBold->setChecked(f.bold());
	actionTextItalic->setChecked(f.italic());
	actionTextUnderline->setChecked(f.underline());
	changedFormat = true;
}

void TextEdit::colorChanged(const QColor &c)
{
	QPixmap pix(30, 30);
	pix.fill(c);
	actionTextColor->setIcon(pix);
	changedFormat = true;
	
}

void TextEdit::alignmentChanged(Qt::Alignment a)
{
	if (a & Qt::AlignLeft)
		actionAlignLeft->setChecked(true);
	else if (a & Qt::AlignHCenter)
		actionAlignCenter->setChecked(true);
	else if (a & Qt::AlignRight)
		actionAlignRight->setChecked(true);
	else if (a & Qt::AlignJustify)
		actionAlignJustify->setChecked(true);
}

 void TextEdit::textChanged() {
	 cursorMoveBecauseTextChanged = true;
	 QTextCursor currentCursor = textEdit->textCursor();

	 if (Controller::getInstance().isChangeFromOutside() == true) {
		 //antibounce quando una modifica viene da ...
		 lastText = textEdit->toPlainText();
		 return;
	 }
	 if (cursorMovefromUpdate == true) {
		 // antibounce quando una modifica viene da updateText
		 cursorMovefromUpdate = false;
		 return;
	 } 
	 if (cursorMovefromAlignement == true) {
		 // antibounce quando una modifica viene da alignmentChanged
		 cursorMovefromAlignement = false;
		 return;
	 } 

	 CRDT crdt = Controller::getInstance().getCRDT();
	 int tosee = currentCursor.anchor();
	 QList<Message> toSend;

	 int insertordelete;
	 if (lastCursor < currentCursor.anchor()) {
		 insertordelete = 1; 		 // inserimento

		 for (int cursore = lastCursor; cursore < currentCursor.anchor(); cursore++) {
			 // FORMATO : Segoe UI Semilight, 20,-1,0,75,1,1,0,-,-
			 // FORMATO : Font_family, size, size_pix, weight (our alignment), bold, italic, underlin,
			 // per implementare il copia e incolla formattato bisognerebbe spostare il cursore. 
			 QString testo = textEdit->toPlainText();
			 QChar qinserito = testo.at(cursore);
			 QColor color = textEdit->textColor();  // prende il colore generale settato nell'editor
			 QFont font = textEdit->currentFont();	// prende il font generale settato nell'editor
			 font.setPointSize(textEdit->fontPointSize()); // prende la dimensione generale settata nell'editor
			 if (actionTextBold->isChecked()) font.setBold(true);
			 if (actionTextItalic->isChecked()) font.setItalic(true);
			 if (actionTextUnderline->isChecked()) font.setUnderline(true);
			 ///
			 int alignCode = getAlignmentCode(textEdit->alignment());
			 font = produceFontwithAlignment(font.toString(), alignCode);
			 QString aa = font.toString();
			 ///

			 char inserito = qinserito.toLatin1();
			 int usercode = 0;  // taken from server

			 Message m = crdt.localInsert(cursore, inserito, font, color);

			 toSend.append(m);
		 }
	 }
	 else if (lastCursor >= currentCursor.anchor()) {
		 insertordelete = 0; 		 // cancellazione

		 for (int cursore = lastCursor-1; cursore >= currentCursor.anchor(); cursore--) { 
			 // for che cicla from last to current all'indietro

			 QString testo = this->lastText;
			 QChar qinserito = testo.at(cursore);
			 char inserito = qinserito.toLatin1();
			 int usercode = 0;  // taken from server

			 //Symbol s(cursore, usercode, inserito, font, color);
			 //Message m(s, insertordelete, usercode);
			 Message m = crdt.localErase(cursore);
			 qDebug() << m.getSymbol().getC();

			 toSend.append(m);
		 }
	 }

	 // se vi è stato un cambiamento di formato
	 if (currentCursor.hasSelection() && changedFormat == true) {
		 int inizioselezione = currentCursor.anchor();
		 int fineselezione = currentCursor.position();
		 //dipende se fatta da destra a sinistra o viceversa: in questo caso va fatta pure la cancellazione
		 // la cancellazione è necessaria perché il cursore è andato in avanti
		 if (currentCursor.position() < currentCursor.anchor()) {
			 inizioselezione = currentCursor.position();
			 fineselezione = currentCursor.anchor();

			 // cancellazione
			 for (int cursore = fineselezione-1; cursore >= inizioselezione; cursore--) {
				 
				 QString testo = this->lastText;
				 QChar qinserito = testo.at(cursore);
				 char inserito = qinserito.toLatin1();
				 int usercode = 0;  // taken from server

				 Message m = crdt.localErase(cursore);
				 qDebug() << m.getSymbol().getC();

				 toSend.append(m);
			 }
		 }

		 changedFormat = false;
		 for (int cursore = inizioselezione; cursore < fineselezione; cursore++) {
			 QString testo = textEdit->toPlainText();
			 QChar qinserito = testo.at(cursore);
			 QColor color = textEdit->textColor();  // prende il colore generale settato nell'editor
			 QFont font = textEdit->currentFont();	// prende il font generale settato nell'editor
			 font.setPointSize(textEdit->fontPointSize()); // prende la dimensione generale settata nell'editor
			 if (actionTextBold->isChecked()) font.setBold(true);
			 if (actionTextItalic->isChecked()) font.setItalic(true);
			 if (actionTextUnderline->isChecked()) font.setUnderline(true);

			 char inserito = qinserito.toLatin1();
			 int usercode = 0;  // taken from server

			 //Symbol s(cursore, usercode, inserito, font, color);
			 //Message m(s, insertordelete, usercode);
			 Message m = crdt.localInsert(cursore, inserito, font, color);

			 toSend.append(m);
		 }
	 }
	 
	 std::thread t([=]() {
	 for (Message m : toSend) {
		 Controller::getInstance().notifyChange(m);
	 }
	 });

	 Controller::getInstance().saveCRDT(crdt);
	 this->lastCursor = currentCursor.position();
	 this->lastText = textEdit->toPlainText();
	 t.join();
}

 
QFont TextEdit::produceFontwithAlignment(QString s, int alignCode) {
	int comacount = 0;
	QString leftpart, rightpart;
	QFont newfont; bool leftdone = false;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ',') comacount++;

		if (comacount == 3 && leftdone == false) {
			leftdone = true;
			leftpart = s.left(i);
			leftpart = leftpart + "," + QString::number(alignCode);
		}
		if (comacount == 4) {
			rightpart = s.right(s.length() - i);
			break;
		}
	}
	QString newfontstring = leftpart + rightpart;
	qDebug() << newfontstring;
	newfont.fromString(leftpart + rightpart);
	return newfont;
}

 void TextEdit::updateCursor(int option) {
	 QTextCursor currentCursor = textEdit->textCursor();
	 if (option == -1) {
		currentCursor.movePosition(QTextCursor::EndOfBlock, QTextCursor::MoveAnchor);
		textEdit->setTextCursor(currentCursor);
	}
	 lastCursor = currentCursor.anchor();
 }

 void TextEdit::updateCursorSAFE() {
	 QTextCursor currentCursor = textEdit->textCursor();

	 if (lastText == textEdit->toPlainText()) {
		 lastCursor = currentCursor.anchor();
	 }
	 
	 if (lastText == textEdit->toPlainText() && 
		 currentCursor.selectionStart() != currentCursor.selectionEnd()) {
		 lastCursor = currentCursor.selectionEnd();

	 }
 }

 void TextEdit::updateText() {
	 CRDT crdt = Controller::getInstance().getCRDT();
	 QString nuovotesto = Controller::getInstance().toText(crdt.getSymbols());
	 //textEdit->setText(nuovotesto); DISATTIVARE
	 
	 // NUOVO caratteri
	 QTextCursor currentCursor = textEdit->textCursor();
	 lastCursor = currentCursor.position();
	 QTextCharFormat fmt;
	 int charIndex = 0;

	 // trova il nuovo carattere
	 Message lastMessageChar = Controller::getInstance().getLastMessage();
	 int SID = lastMessageChar.getSymbol().getSID();
	 int counter = lastMessageChar.getSymbol().getCounter();
	 int newchar = lastMessageChar.getSymbol().getC();
	 bool flagInserito = false;

	 cursorMovefromUpdate = true; // va messo prima per le race conditions
	 currentCursor.movePosition(QTextCursor::StartOfBlock, QTextCursor::MoveAnchor);
	 for (Symbol s : crdt.getSymbols()) {
		 if (s.getSID() == SID && counter == s.getCounter()) {
			 flagInserito = true;
			 QFont font = s.getFont();
			 QColor color = s.getColor();
			 QString fontstring = font.toString();
			 QStringList fontfield = fontstring.split(",");
			 QString fontstr = fontfield.at(0);
			 int sizestr = fontfield.at(1).toInt();
			 int alignment = fontfield.at(3).toInt();
			 int boldvalue = fontfield.at(4).toInt();
			 int italvalue = fontfield.at(5).toInt();
			 int undervalue = fontfield.at(6).toInt();
			 fmt.setForeground(color);
			 fmt.setFontFamily(fontstr);
			 fmt.setFontPointSize(sizestr);
			 fmt.setFontWeight(boldvalue > 50 ? QFont::Bold : QFont::Normal);
			 fmt.setFontItalic(italvalue > 0);
			 fmt.setFontUnderline(undervalue > 0);
			 //textEdit->setAlignment(Qt::Alignment(alignment));
			 //if (s.getC() == '\0') break;

			 // move a single char to update font and color
			 currentCursor.setPosition(charIndex, QTextCursor::MoveAnchor);
			 currentCursor.insertText(QString(s.getC()));
			 currentCursor.setPosition(charIndex, QTextCursor::MoveAnchor);
			 currentCursor.setPosition(charIndex + 1, QTextCursor::KeepAnchor);
			 //keep anchor mantiene il cursore, move lo sposta
			 currentCursor.mergeCharFormat(fmt);
			 currentCursor.clearSelection();

			 // formatta il blocco seguendo quanto detto dall'ultimo carattere.
			 QTextBlockFormat textBlockFormat = currentCursor.blockFormat();
			 textBlockFormat.setAlignment(Qt::Alignment(alignment));
			 currentCursor.mergeBlockFormat(textBlockFormat);
			 break;
		 }
		 charIndex++; 
	 }

	 if (flagInserito == false) {
		 // messaggio cancellazione
		 int charIndextoDelete = Controller::getInstance().getDeleteIndex();
		 currentCursor.setPosition(charIndextoDelete +1, QTextCursor::MoveAnchor);
		 currentCursor.deletePreviousChar();
	 }

	 //  reset original position
	 currentCursor.setPosition(lastCursor, QTextCursor::MoveAnchor);
	 lastText = textEdit->toPlainText();
 }


 void TextEdit::updateTextAll() {
	 // aggiorna e dà formattazione a tutti i caratteri
	 CRDT crdt = Controller::getInstance().getCRDT();
	 QString nuovotesto = Controller::getInstance().toText(crdt.getSymbols());
	 textEdit->setText(nuovotesto);

	 // NUOVO caratteri
	 QTextCursor currentCursor = textEdit->textCursor();
	 lastCursor = currentCursor.position();
	 QTextCharFormat fmt;
	 int charIndex = 0;

	 // per ottimizzazione sarebbe interessante iterare solo sui nuovi caratteri
	 currentCursor.movePosition(QTextCursor::StartOfBlock, QTextCursor::MoveAnchor);
	 for (Symbol s : crdt.getSymbols()) {
		QFont font = s.getFont();
		QColor color = s.getColor();
		QString fontstring = font.toString();
		QStringList fontfield = fontstring.split(",");
		QString fontstr = fontfield.at(0);
		int sizestr = fontfield.at(1).toInt();
		int alignment = fontfield.at(3).toInt();
		int boldvalue = fontfield.at(4).toInt();
		int italvalue = fontfield.at(5).toInt();
		int undervalue = fontfield.at(6).toInt();
		fmt.setForeground(color);
		fmt.setFontFamily(fontstr);
		fmt.setFontPointSize(sizestr);
		fmt.setFontWeight(boldvalue > 50 ? QFont::Bold : QFont::Normal);
		fmt.setFontItalic(italvalue > 0);
		fmt.setFontUnderline(undervalue > 0);
		textEdit->setAlignment(Qt::Alignment(alignment));

		// move a single char to update font and color
		currentCursor.setPosition(charIndex, QTextCursor::MoveAnchor);
		currentCursor.setPosition(charIndex + 1, QTextCursor::KeepAnchor);
		//keep anchor mantiene il cursore, move lo sposta
		currentCursor.mergeCharFormat(fmt);
		currentCursor.clearSelection();

		// formatta il blocco seguendo quanto detto dall'ultimo carattere.
		QTextBlockFormat textBlockFormat = currentCursor.blockFormat();
		textBlockFormat.setAlignment(Qt::Alignment(alignment));
		currentCursor.mergeBlockFormat(textBlockFormat);
		charIndex++;
	 }
	 //  reset original position
	 currentCursor.setPosition(lastCursor, QTextCursor::MoveAnchor);
 }


 void TextEdit::setSavingTimer() 
 {
	 std::string f = fileName.toStdString();
	 QTimer* timer = new QTimer(this);
	 connect(timer, &QTimer::timeout, &Controller::getInstance(), [=]() {Controller::getInstance().saveFile(f); });

	 std::cout << "Timer attivo";
	 timer->start(TIMER_TIME);
 }