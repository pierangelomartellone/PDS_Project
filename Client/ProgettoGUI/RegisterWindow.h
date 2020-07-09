#pragma once

#include <QWidget>
#include "ui_RegisterWindow.h"
#include "qdrag.h"

class RegisterWindow : public QWidget
{
	Q_OBJECT

public:
	RegisterWindow(QWidget *parent = Q_NULLPTR);
	~RegisterWindow();

protected:
	void dragEnterEvent(QDragEnterEvent *e);
	void dragLeaveEvent(QDragLeaveEvent * e);
	void dragMoveEvent(QDragMoveEvent * e);
	void dropEvent(QDropEvent * e);
public slots:
	void on_pushButton_clicked();
	void on_loginButton_clicked();

private:
	Ui::RegisterWindow ui;
	QPixmap myimage;
};
