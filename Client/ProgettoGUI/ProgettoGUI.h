#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ProgettoGUI.h"

class ProgettoGUI : public QMainWindow
{
	Q_OBJECT

public:
	ProgettoGUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::ProgettoGUIClass ui;
};
