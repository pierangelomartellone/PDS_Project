#pragma once

#include "ui_Settings.h"
#include <qwidget.h>
#include "FileExplorerWindow.h"
#include <ui_Settings.h>

class Settings : public QWidget
{
	Q_OBJECT
		
public:
	Settings(QWidget* parent = Q_NULLPTR);
	~Settings();

protected:
	void dragEnterEvent(QDragEnterEvent* e);
	void dragLeaveEvent(QDragLeaveEvent* e);
	void dragMoveEvent(QDragMoveEvent* e);
	void dropEvent(QDropEvent* e);
private:
	Ui::Settings ui;
	QPixmap myimage;
	/*QStringListModel* model;
	QStringList temp;*/

private slots:
	void on_editUsernameButton_clicked();
	void on_editPasswordButton_clicked();
	void on_pushButton_clicked();
};

