#pragma once

#include "ui_Settings.h"
#include <qwidget.h>

class Settings :
    public QWidget
{
	Q_OBJECT
		
public:
	Settings(QWidget* parent = Q_NULLPTR);
	~Settings();

private:
	Ui::Settings ui;
	/*QStringListModel* model;
	QStringList temp;*/

private slots:
	void on_editUsernameButton_clicked();
};

