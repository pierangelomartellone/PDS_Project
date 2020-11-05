#pragma once
#include <QMainWindow>
#include <QMap>
#include <QPointer>
#include <QLabel>
#include <qtextcursor.h>

class QAction;
class QComboBox;
class QFontComboBox;
class QTextEdit;
class QTextCharFormat;
class QMenu;
class QPrinter;

class TextEdit : public QMainWindow
{
	Q_OBJECT
public:
	TextEdit(QWidget* parent = 0);

	bool load(const QString& f);
	bool loadnew(const QString& f);

	// antibounce flags
	bool cursorMovefromUpdate = false;
	bool changedFormat = false;
	bool cursorMovefromAlignement = false;
	bool cursorMovefromBlockFormat = false;
	int multipleDelete = 0;

	bool whoTypedEnabled = false;
	int lastIndexFirstSearch = 0;

public slots:
	void fileNew();
	void setSavingTimer();

protected:
	void closeEvent(QCloseEvent* e) override;

private slots:
	void fileOpen();
	bool fileSave();
	bool fileSaveAs();
	void filePrint();
	void filePrintPreview();
	void filePrintPdf();

	void textBold();
	void textUnderline();
	void textItalic();
	void textFamily(const QString& f);
	void textSize(const QString& p);
	void textStyle(int styleIndex);
	void textColor();
	int getAlignmentCode(Qt::Alignment align);
	void showColorsfromUsers();
	void showLink();
	void textAlign(QAction* a);

	void currentCharFormatChanged(const QTextCharFormat& format);
	void cursorPositionChanged();

	void clipboardDataChanged();
	void about();
	void printPreview(QPrinter*);
	void addUserToToolbar(int id);
	void addUserToToolbarWriting(int id);


private:
	void setupFileActions();
	void setupEditActions();
	void setupTextActions();
	bool maybeSave();
	void setCurrentFileName(const QString& fileName);

	void mergeFormatOnWordOrSelection(const QTextCharFormat& format);
	void fontChanged(const QFont& f);
	void colorChanged(const QColor& c);
	void alignmentChanged(Qt::Alignment a);
	void enableAlignment();
	int findStartBlock(int pos);
	int findEndBlock(int pos);
	void textChanged();
	QFont produceFontwithAlignment(QString s, int alignCode);
	void updateCursor(int option);

	void updateCursorSAFE();

	void updateBigText();

	void updateText();
	void updateTextAll();

	void showUserCursor(int id, QTextCursor currentCursor);

	QList<bool> writingFlag;

	int lastCursor;
	QString lastText;
	bool cursorMoveBecauseTextChanged = false;

	QAction* actionSave;
	QAction* actionTextBold;
	QAction* actionTextUnderline;
	QAction* actionTextItalic;
	QAction* actionTextColor;
	QAction* actionAlignLeft;
	QAction* actionAlignCenter;
	QAction* actionAlignRight;
	QAction* actionAlignJustify;
	QAction* actionUndo;
	QAction* actionRedo;
#ifndef QT_NO_CLIPBOARD
	QAction* actionCut;
	QAction* actionCopy;
	QAction* actionPaste;
	QAction* actionColorsfromUsers;
	QAction* actionSharingLink;
#endif


	QToolBar* tb;
	QComboBox* comboStyle;
	QFontComboBox* comboFont;
	QComboBox* comboSize;

	QString fileName;
	QTextEdit* textEdit;

	QLabel* userCursorLabel;
	QToolBar* legend;
};