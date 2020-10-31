/********************************************************************************
** Form generated from reading UI file 'MyFirstWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFIRSTWINDOW_H
#define UI_MYFIRSTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFirstWindow
{
public:
    QGridLayout *gridLayout_2;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QSpacerItem *verticalSpacer_7;
    QLabel *userLabel;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *userText;
    QSpacerItem *verticalSpacer_5;
    QLabel *passLabel;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *passText;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *newAccountButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *errorDescription;

    void setupUi(QWidget *MyFirstWindow)
    {
        if (MyFirstWindow->objectName().isEmpty())
            MyFirstWindow->setObjectName(QString::fromUtf8("MyFirstWindow"));
        MyFirstWindow->setEnabled(true);
        MyFirstWindow->resize(1200, 853);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(MyFirstWindow->sizePolicy().hasHeightForWidth());
        MyFirstWindow->setSizePolicy(sizePolicy);
        MyFirstWindow->setMaximumSize(QSize(1200, 1200));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush3(QColor(255, 255, 220, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        MyFirstWindow->setPalette(palette);
        MyFirstWindow->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(MyFirstWindow);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalFrame = new QFrame(MyFirstWindow);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        sizePolicy.setHeightForWidth(verticalFrame->sizePolicy().hasHeightForWidth());
        verticalFrame->setSizePolicy(sizePolicy);
        verticalFrame->setMinimumSize(QSize(400, 550));
        verticalFrame->setMaximumSize(QSize(400, 550));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        verticalFrame->setPalette(palette1);
        QFont font;
        font.setPointSize(12);
        verticalFrame->setFont(font);
        verticalFrame->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-radius: 30px;\n"
"color:(255,255,255);"));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(verticalFrame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(147, 102));
        frame_2->setMaximumSize(QSize(115, 161));
        frame_2->setStyleSheet(QString::fromUtf8("image:url(:/images/login.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_2, 0, Qt::AlignHCenter);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        userLabel = new QLabel(verticalFrame);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(7);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(userLabel->sizePolicy().hasHeightForWidth());
        userLabel->setSizePolicy(sizePolicy1);
        userLabel->setMinimumSize(QSize(90, 0));
        userLabel->setMaximumSize(QSize(125, 30));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        userLabel->setPalette(palette2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        userLabel->setFont(font1);
        userLabel->setMouseTracking(false);
        userLabel->setFocusPolicy(Qt::NoFocus);
        userLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI Emoji\";\n"
"color:black;\n"
""));

        verticalLayout->addWidget(userLabel, 0, Qt::AlignHCenter);

        verticalSpacer_6 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        userText = new QLineEdit(verticalFrame);
        userText->setObjectName(QString::fromUtf8("userText"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(3);
        sizePolicy2.setHeightForWidth(userText->sizePolicy().hasHeightForWidth());
        userText->setSizePolicy(sizePolicy2);
        userText->setMinimumSize(QSize(0, 0));
        userText->setMaximumSize(QSize(550, 60));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        userText->setPalette(palette3);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        userText->setFont(font2);
        userText->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background: white;\n"
"border:1px solid black;"));
        userText->setEchoMode(QLineEdit::Normal);

        verticalLayout->addWidget(userText);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        passLabel = new QLabel(verticalFrame);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(3);
        sizePolicy3.setHeightForWidth(passLabel->sizePolicy().hasHeightForWidth());
        passLabel->setSizePolicy(sizePolicy3);
        passLabel->setMinimumSize(QSize(90, 5));
        passLabel->setMaximumSize(QSize(16777215, 30));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        passLabel->setPalette(palette4);
        passLabel->setFont(font1);
        passLabel->setLayoutDirection(Qt::LeftToRight);
        passLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI Emoji\";\n"
"color:black;\n"
""));

        verticalLayout->addWidget(passLabel, 0, Qt::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        passText = new QLineEdit(verticalFrame);
        passText->setObjectName(QString::fromUtf8("passText"));
        sizePolicy3.setHeightForWidth(passText->sizePolicy().hasHeightForWidth());
        passText->setSizePolicy(sizePolicy3);
        passText->setMinimumSize(QSize(0, 0));
        passText->setMaximumSize(QSize(550, 60));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        passText->setPalette(palette5);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        passText->setFont(font3);
        passText->setLayoutDirection(Qt::LeftToRight);
        passText->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background: white;\n"
"border:1px solid black;"));
        passText->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passText);

        verticalSpacer = new QSpacerItem(20, 39, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(verticalFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        pushButton->setMinimumSize(QSize(0, 0));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush12(QColor(54, 161, 240, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush12);
        QBrush brush13(QColor(115, 255, 190, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush13);
        QBrush brush14(QColor(62, 247, 161, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        QBrush brush15(QColor(4, 120, 66, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush15);
        QBrush brush16(QColor(6, 160, 88, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        QBrush brush17(QColor(132, 247, 193, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush17);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        QBrush brush18(QColor(9, 240, 132, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        pushButton->setPalette(palette6);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"background:rgb(54,161,240);"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        newAccountButton = new QPushButton(verticalFrame);
        newAccountButton->setObjectName(QString::fromUtf8("newAccountButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(3);
        sizePolicy4.setVerticalStretch(3);
        sizePolicy4.setHeightForWidth(newAccountButton->sizePolicy().hasHeightForWidth());
        newAccountButton->setSizePolicy(sizePolicy4);
        newAccountButton->setMinimumSize(QSize(131, 0));
        newAccountButton->setMaximumSize(QSize(129, 16777215));
        QPalette palette7;
        QBrush brush19(QColor(238, 130, 238, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush19);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush19);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush19);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush20(QColor(238, 130, 238, 128));
        brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush20);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush19);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush19);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush19);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush21(QColor(238, 130, 238, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush21);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush22(QColor(238, 130, 238, 128));
        brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush22);
#endif
        newAccountButton->setPalette(palette7);
        newAccountButton->setFont(font1);
        newAccountButton->setCursor(QCursor(Qt::PointingHandCursor));
        newAccountButton->setStyleSheet(QString::fromUtf8("background:white;\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"color:violet;"));

        verticalLayout->addWidget(newAccountButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        errorDescription = new QLabel(verticalFrame);
        errorDescription->setObjectName(QString::fromUtf8("errorDescription"));
        errorDescription->setEnabled(true);
        sizePolicy3.setHeightForWidth(errorDescription->sizePolicy().hasHeightForWidth());
        errorDescription->setSizePolicy(sizePolicy3);
        QPalette palette8;
        QBrush brush23(QColor(255, 90, 90, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush23);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush24(QColor(255, 0, 0, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush24);
        QBrush brush25(QColor(212, 0, 0, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush25);
        QBrush brush26(QColor(85, 0, 0, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush26);
        QBrush brush27(QColor(113, 0, 0, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush27);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush23);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush23);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        QBrush brush28(QColor(212, 127, 127, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush28);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        QBrush brush29(QColor(85, 255, 255, 128));
        brush29.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush29);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush23);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush24);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush25);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush26);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush27);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush23);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush23);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush28);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush23);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush24);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush25);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush26);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush27);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush23);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush23);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        QBrush brush30(QColor(170, 0, 0, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush30);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        errorDescription->setPalette(palette8);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        errorDescription->setFont(font4);
        errorDescription->setStyleSheet(QString::fromUtf8("color:rgb(255,90,90);"));
        errorDescription->setFrameShape(QFrame::NoFrame);
        errorDescription->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(errorDescription);

        errorDescription->raise();
        userLabel->raise();
        frame_2->raise();
        passLabel->raise();
        newAccountButton->raise();
        pushButton->raise();
        passText->raise();
        userText->raise();

        gridLayout_2->addWidget(verticalFrame, 0, 0, 1, 1);

        QWidget::setTabOrder(userText, passText);
        QWidget::setTabOrder(passText, pushButton);
        QWidget::setTabOrder(pushButton, newAccountButton);

        retranslateUi(MyFirstWindow);

        QMetaObject::connectSlotsByName(MyFirstWindow);
    } // setupUi

    void retranslateUi(QWidget *MyFirstWindow)
    {
        MyFirstWindow->setWindowTitle(QCoreApplication::translate("MyFirstWindow", "MyFirstWindow", nullptr));
        userLabel->setText(QCoreApplication::translate("MyFirstWindow", "Username", nullptr));
        userText->setText(QString());
        passLabel->setText(QCoreApplication::translate("MyFirstWindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("MyFirstWindow", "Login", nullptr));
        newAccountButton->setText(QCoreApplication::translate("MyFirstWindow", "New Account?", nullptr));
        errorDescription->setText(QCoreApplication::translate("MyFirstWindow", "Sorry, you typed wrong username or password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyFirstWindow: public Ui_MyFirstWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFIRSTWINDOW_H
