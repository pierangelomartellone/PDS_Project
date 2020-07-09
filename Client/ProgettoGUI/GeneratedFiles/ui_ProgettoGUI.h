/********************************************************************************
** Form generated from reading UI file 'ProgettoGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGETTOGUI_H
#define UI_PROGETTOGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgettoGUIClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ProgettoGUIClass)
    {
        if (ProgettoGUIClass->objectName().isEmpty())
            ProgettoGUIClass->setObjectName(QString::fromUtf8("ProgettoGUIClass"));
        ProgettoGUIClass->resize(600, 400);
        menuBar = new QMenuBar(ProgettoGUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ProgettoGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProgettoGUIClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ProgettoGUIClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ProgettoGUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ProgettoGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ProgettoGUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ProgettoGUIClass->setStatusBar(statusBar);

        retranslateUi(ProgettoGUIClass);

        QMetaObject::connectSlotsByName(ProgettoGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *ProgettoGUIClass)
    {
        ProgettoGUIClass->setWindowTitle(QApplication::translate("ProgettoGUIClass", "ProgettoGUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgettoGUIClass: public Ui_ProgettoGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGETTOGUI_H
