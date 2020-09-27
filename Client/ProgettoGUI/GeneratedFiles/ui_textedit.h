/********************************************************************************
** Form generated from reading UI file 'textedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDIT_H
#define UI_TEXTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_textedit
{
public:

    void setupUi(QWidget *textedit)
    {
        if (textedit->objectName().isEmpty())
            textedit->setObjectName(QString::fromUtf8("textedit"));
        textedit->resize(400, 300);

        retranslateUi(textedit);

        QMetaObject::connectSlotsByName(textedit);
    } // setupUi

    void retranslateUi(QWidget *textedit)
    {
        textedit->setWindowTitle(QCoreApplication::translate("textedit", "textedit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class textedit: public Ui_textedit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDIT_H
