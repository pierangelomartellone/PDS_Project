#pragma once

#include <QWidget>
#include "ui_MyFirstWindow.h"

class MyFirstWindow : public QWidget
{
	Q_OBJECT

public:
	MyFirstWindow(QWidget *parent = Q_NULLPTR);
	~MyFirstWindow();

private slots:
	void on_pushButton_clicked();
	void on_newAccountButton_clicked();

private:
	Ui::MyFirstWindow ui;
};
