/********************************************************************************
** Form generated from reading UI file 'Settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *editUsernameButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *editPasswordButton;
    QFrame *frame_3;
    QLabel *label_3;
    QLabel *userImage;
    QLabel *label_5;
    QLabel *errorDescription;
    QPushButton *pushButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1084, 840);
        Form->setStyleSheet(QString::fromUtf8("background:url(:/images/Immagine.png)"));
        frame = new QFrame(Form);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(190, 120, 761, 611));
        frame->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-radius:20px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 170, 351, 341));
        frame_2->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"font: 10pt \"Segoe UI Emoji\";\n"
"background: white;\n"
"border:1px solid black;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 66, 214, 40));
        lineEdit->setMinimumSize(QSize(214, 35));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"font: 9pt \"Segoe UI Emoji\";\n"
"background: white;\n"
"border:1px solid black;"));
        lineEdit_3 = new QLineEdit(frame_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 187, 214, 40));
        lineEdit_3->setMinimumSize(QSize(214, 35));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"font: 9pt \"Segoe UI Emoji\";\n"
"background: white;\n"
"border:1px solid black;"));
        lineEdit_3->setEchoMode(QLineEdit::Password);
        lineEdit_4 = new QLineEdit(frame_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(20, 240, 214, 40));
        lineEdit_4->setMinimumSize(QSize(214, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(false);
        font.setStyleStrategy(QFont::PreferDefault);
        lineEdit_4->setFont(font);
        lineEdit_4->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"font: 9pt \"Segoe UI Emoji\";\n"
"background: white;\n"
"border:1px solid black;"));
        lineEdit_4->setEchoMode(QLineEdit::Password);
        lineEdit_4->setDragEnabled(false);
        lineEdit_4->setClearButtonEnabled(false);
        editUsernameButton = new QPushButton(frame_2);
        editUsernameButton->setObjectName(QString::fromUtf8("editUsernameButton"));
        editUsernameButton->setGeometry(QRect(260, 66, 75, 40));
        editUsernameButton->setCursor(QCursor(Qt::PointingHandCursor));
        editUsernameButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"background:rgb(54,161,240);"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 115, 27));
        label->setStyleSheet(QString::fromUtf8("border:none;"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 150, 115, 27));
        label_2->setStyleSheet(QString::fromUtf8("border:none;"));
        editPasswordButton = new QPushButton(frame_2);
        editPasswordButton->setObjectName(QString::fromUtf8("editPasswordButton"));
        editPasswordButton->setGeometry(QRect(260, 210, 75, 40));
        editPasswordButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"background:rgb(54,161,240);"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(390, 170, 351, 341));
        frame_3->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"font: 10pt \"Segoe UI Emoji\";\n"
"background: white;\n"
"border:1px solid black;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(63, 30, 146, 27));
        label_3->setStyleSheet(QString::fromUtf8("border:none;"));
        userImage = new QLabel(frame_3);
        userImage->setObjectName(QString::fromUtf8("userImage"));
        userImage->setGeometry(QRect(60, 70, 230, 230));
        userImage->setMaximumSize(QSize(250, 250));
        userImage->setStyleSheet(QString::fromUtf8("border:none;"));
        userImage->setScaledContents(true);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(330, 40, 120, 120));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/profileSettings.png")));
        label_5->setScaledContents(true);
        errorDescription = new QLabel(frame);
        errorDescription->setObjectName(QString::fromUtf8("errorDescription"));
        errorDescription->setEnabled(true);
        errorDescription->setGeometry(QRect(191, 550, 380, 39));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(errorDescription->sizePolicy().hasHeightForWidth());
        errorDescription->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 90, 90, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(212, 127, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush9(QColor(85, 255, 255, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush11(QColor(170, 0, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        errorDescription->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        errorDescription->setFont(font1);
        errorDescription->setStyleSheet(QString::fromUtf8("color:rgb(255,90,90);"));
        errorDescription->setFrameShape(QFrame::NoFrame);
        errorDescription->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 31, 33));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/back.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(28, 49));
        pushButton->setAutoDefault(true);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("Form", "Type your new password", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("Form", "Repeat your password", nullptr));
        editUsernameButton->setText(QCoreApplication::translate("Form", "Edit", nullptr));
        label->setText(QCoreApplication::translate("Form", "Your Username", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Password", nullptr));
        editPasswordButton->setText(QCoreApplication::translate("Form", "Edit", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Your profile picture", nullptr));
        userImage->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        label_5->setText(QString());
        errorDescription->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
