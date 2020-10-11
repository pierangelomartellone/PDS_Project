#pragma once

#include <QWidget>
#include "ui_FileExplorerWindow.h"
#include <qstringlist.h>
#include <qstringlistmodel.h>

class FileExplorerWindow : public QWidget
{
	Q_OBJECT

public:
	FileExplorerWindow(QWidget *parent = Q_NULLPTR);
	~FileExplorerWindow();

private:
	Ui::FileExplorerWindow ui;
	QStringListModel *model;
	QStringList temp;

private slots:
	void on_newFileButton_clicked();
	void on_loadFileButton_clicked();
	void on_loadFileURIButton_clicked();
	void on_toolButton_clicked();
};
