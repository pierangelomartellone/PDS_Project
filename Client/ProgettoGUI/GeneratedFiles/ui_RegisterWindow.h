/********************************************************************************
** Form generated from reading UI file 'RegisterWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QGridLayout *gridLayout_2;
    QFrame *verticalFrame;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QLabel *userLabel;
    QLabel *pictureDescription;
    QLineEdit *passText;
    QLineEdit *userText;
    QSpacerItem *verticalSpacer;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *picture;
    QLabel *passLabel;
    QSpacerItem *verticalSpacer_6;
    QLabel *errorDescription;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QString::fromUtf8("RegisterWindow"));
        RegisterWindow->resize(1201, 851);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(RegisterWindow->sizePolicy().hasHeightForWidth());
        RegisterWindow->setSizePolicy(sizePolicy);
#if QT_CONFIG(whatsthis)
        RegisterWindow->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
        RegisterWindow->setStyleSheet(QString::fromUtf8("background:url(:/images/Immagine.png)"));
        RegisterWindow->setWindowFilePath(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(RegisterWindow);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalFrame = new QFrame(RegisterWindow);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(100);
        sizePolicy1.setHeightForWidth(verticalFrame->sizePolicy().hasHeightForWidth());
        verticalFrame->setSizePolicy(sizePolicy1);
        verticalFrame->setMinimumSize(QSize(400, 550));
        verticalFrame->setMaximumSize(QSize(400, 550));
        verticalFrame->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-radius: 30px;\n"
"color:(255,255,255);"));
        gridLayout = new QGridLayout(verticalFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 11, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 15, 0, 1, 1);

        userLabel = new QLabel(verticalFrame);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        sizePolicy1.setHeightForWidth(userLabel->sizePolicy().hasHeightForWidth());
        userLabel->setSizePolicy(sizePolicy1);
        userLabel->setMinimumSize(QSize(90, 0));
        userLabel->setMaximumSize(QSize(93, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        userLabel->setFont(font);
        userLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI Emoji\";\n"
"color:black;\n"
""));

        gridLayout->addWidget(userLabel, 6, 0, 1, 1, Qt::AlignHCenter);

        pictureDescription = new QLabel(verticalFrame);
        pictureDescription->setObjectName(QString::fromUtf8("pictureDescription"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pictureDescription->sizePolicy().hasHeightForWidth());
        pictureDescription->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pictureDescription->setFont(font1);
        pictureDescription->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 9pt \"Segoe UI Emoji\";\n"
""));

        gridLayout->addWidget(pictureDescription, 2, 0, 1, 1, Qt::AlignHCenter);

        passText = new QLineEdit(verticalFrame);
        passText->setObjectName(QString::fromUtf8("passText"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(100);
        sizePolicy3.setVerticalStretch(100);
        sizePolicy3.setHeightForWidth(passText->sizePolicy().hasHeightForWidth());
        passText->setSizePolicy(sizePolicy3);
        passText->setMinimumSize(QSize(0, 52));
        passText->setMaximumSize(QSize(550, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        passText->setFont(font2);
        passText->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background: white;\n"
"border:1px solid black;"));
        passText->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passText, 12, 0, 1, 1);

        userText = new QLineEdit(verticalFrame);
        userText->setObjectName(QString::fromUtf8("userText"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(100);
        sizePolicy4.setVerticalStretch(100);
        sizePolicy4.setHeightForWidth(userText->sizePolicy().hasHeightForWidth());
        userText->setSizePolicy(sizePolicy4);
        userText->setMinimumSize(QSize(0, 52));
        userText->setMaximumSize(QSize(550, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        userText->setFont(font3);
        userText->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background: white;\n"
"border:1px solid black;"));
        userText->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(userText, 8, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        loginButton = new QPushButton(verticalFrame);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        sizePolicy3.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy3);
        loginButton->setMinimumSize(QSize(174, 28));
        loginButton->setMaximumSize(QSize(164, 0));
        QPalette palette;
        QBrush brush(QColor(238, 130, 238, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(115, 255, 190, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(62, 247, 161, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(4, 120, 66, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(6, 160, 88, 255));
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
        QBrush brush7(QColor(132, 247, 193, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush9(QColor(0, 0, 0, 128));
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
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
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
        QBrush brush10(QColor(9, 240, 132, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        loginButton->setPalette(palette);
        loginButton->setFont(font);
        loginButton->setCursor(QCursor(Qt::PointingHandCursor));
        loginButton->setStyleSheet(QString::fromUtf8("background:white;\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"color:violet;"));

        gridLayout->addWidget(loginButton, 18, 0, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 9, 0, 1, 1);

        pushButton = new QPushButton(verticalFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        pushButton->setMinimumSize(QSize(380, 52));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush11(QColor(54, 161, 240, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        pushButton->setPalette(palette1);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"background:rgb(54,161,240);"));

        gridLayout->addWidget(pushButton, 16, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_2, 13, 0, 1, 1);

        picture = new QLabel(verticalFrame);
        picture->setObjectName(QString::fromUtf8("picture"));
        sizePolicy2.setHeightForWidth(picture->sizePolicy().hasHeightForWidth());
        picture->setSizePolicy(sizePolicy2);
        picture->setMinimumSize(QSize(74, 86));
        picture->setMaximumSize(QSize(115, 137));
        picture->setLayoutDirection(Qt::LeftToRight);
        picture->setPixmap(QPixmap(QString::fromUtf8("images/register.png")));
        picture->setScaledContents(true);
        picture->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(picture, 1, 0, 1, 1, Qt::AlignHCenter);

        passLabel = new QLabel(verticalFrame);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(100);
        sizePolicy5.setVerticalStretch(100);
        sizePolicy5.setHeightForWidth(passLabel->sizePolicy().hasHeightForWidth());
        passLabel->setSizePolicy(sizePolicy5);
        passLabel->setMinimumSize(QSize(90, 0));
        passLabel->setMaximumSize(QSize(16777215, 30));
        passLabel->setFont(font);
        passLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI Emoji\";\n"
"color:black;\n"
""));

        gridLayout->addWidget(passLabel, 10, 0, 1, 1, Qt::AlignHCenter);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 7, 0, 1, 1);

        errorDescription = new QLabel(verticalFrame);
        errorDescription->setObjectName(QString::fromUtf8("errorDescription"));
        errorDescription->setEnabled(true);
        sizePolicy3.setHeightForWidth(errorDescription->sizePolicy().hasHeightForWidth());
        errorDescription->setSizePolicy(sizePolicy3);
        QPalette palette2;
        QBrush brush12(QColor(255, 90, 90, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush13(QColor(127, 255, 127, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush13);
        QBrush brush14(QColor(63, 255, 63, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        QBrush brush15(QColor(0, 127, 0, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush15);
        QBrush brush16(QColor(0, 170, 0, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush17(QColor(0, 255, 0, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush17);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush17);
        QBrush brush18(QColor(0, 255, 0, 128));
        brush18.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush18);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        errorDescription->setPalette(palette2);
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

        gridLayout->addWidget(errorDescription, 14, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 17, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_4, 0, 0, 1, 1);


        gridLayout_2->addWidget(verticalFrame, 0, 0, 1, 1);

        QWidget::setTabOrder(userText, passText);
        QWidget::setTabOrder(passText, pushButton);
        QWidget::setTabOrder(pushButton, loginButton);

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QWidget *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "New User", nullptr));
        userLabel->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        pictureDescription->setText(QCoreApplication::translate("RegisterWindow", "Drop your profile picture above", nullptr));
        loginButton->setText(QCoreApplication::translate("RegisterWindow", "Already registered?", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterWindow", "Sign up", nullptr));
        picture->setText(QString());
        passLabel->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        errorDescription->setText(QCoreApplication::translate("RegisterWindow", "Sorry, already existing username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
