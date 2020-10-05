/********************************************************************************
** Form generated from reading UI file 'RegisterWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
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
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_9;
    QLabel *picture;
    QLabel *pictureDescription;
    QLabel *passLabel;
    QSpacerItem *verticalSpacer_5;
    QLabel *errorDescription;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *userLabel;
    QSpacerItem *verticalSpacer;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *passText;
    QLineEdit *userText;
    QSpacerItem *verticalSpacer_10;

    void setupUi(QWidget *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QString::fromUtf8("RegisterWindow"));
        RegisterWindow->resize(900, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(RegisterWindow->sizePolicy().hasHeightForWidth());
        RegisterWindow->setSizePolicy(sizePolicy);
#if QT_CONFIG(whatsthis)
        RegisterWindow->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
        RegisterWindow->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0.103, y1:0.914409, x2:1, y2:0,\n"
"stop:0 rgba(158, 46, 37, 255),\n"
"stop:0.745946 rgba(255, 87, 34, 255),\n"
"stop:1 rgba(255, 180, 74, 255));"));
        RegisterWindow->setWindowFilePath(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(RegisterWindow);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalFrame = new QFrame(RegisterWindow);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        sizePolicy.setHeightForWidth(verticalFrame->sizePolicy().hasHeightForWidth());
        verticalFrame->setSizePolicy(sizePolicy);
        verticalFrame->setMinimumSize(QSize(400, 550));
        verticalFrame->setMaximumSize(QSize(400, 550));
        verticalFrame->setStyleSheet(QString::fromUtf8("background:rgb(53,53,53);\n"
"border-radius: 30px;\n"
""));
        gridLayout = new QGridLayout(verticalFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_4, 0, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 14, 0, 1, 1);

        picture = new QLabel(verticalFrame);
        picture->setObjectName(QString::fromUtf8("picture"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(picture->sizePolicy().hasHeightForWidth());
        picture->setSizePolicy(sizePolicy1);
        picture->setMinimumSize(QSize(150, 150));
        picture->setMaximumSize(QSize(150, 150));
        picture->setLayoutDirection(Qt::LeftToRight);
        picture->setPixmap(QPixmap(QString::fromUtf8("images/register.png")));
        picture->setScaledContents(true);
        picture->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(picture, 1, 0, 1, 1, Qt::AlignHCenter);

        pictureDescription = new QLabel(verticalFrame);
        pictureDescription->setObjectName(QString::fromUtf8("pictureDescription"));
        sizePolicy1.setHeightForWidth(pictureDescription->sizePolicy().hasHeightForWidth());
        pictureDescription->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pictureDescription->setFont(font);
        pictureDescription->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 9pt \"Segoe UI Emoji\";\n"
""));

        gridLayout->addWidget(pictureDescription, 3, 0, 1, 1, Qt::AlignHCenter);

        passLabel = new QLabel(verticalFrame);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(100);
        sizePolicy2.setHeightForWidth(passLabel->sizePolicy().hasHeightForWidth());
        passLabel->setSizePolicy(sizePolicy2);
        passLabel->setMinimumSize(QSize(0, 0));
        passLabel->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        passLabel->setFont(font1);
        passLabel->setStyleSheet(QString::fromUtf8("font: 13pt \"Segoe UI Emoji\";\n"
"background:rgb(53,53,53);\n"
"color:white;\n"
""));

        gridLayout->addWidget(passLabel, 9, 0, 1, 1, Qt::AlignHCenter);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 4, 0, 1, 1);

        errorDescription = new QLabel(verticalFrame);
        errorDescription->setObjectName(QString::fromUtf8("errorDescription"));
        errorDescription->setEnabled(true);
        sizePolicy2.setHeightForWidth(errorDescription->sizePolicy().hasHeightForWidth());
        errorDescription->setSizePolicy(sizePolicy2);
        QPalette palette;
        QBrush brush(QColor(255, 90, 90, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(53, 53, 53, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 255, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 255, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 127, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 170, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush7(QColor(0, 255, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        QBrush brush9(QColor(0, 255, 0, 128));
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
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
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
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        errorDescription->setPalette(palette);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        errorDescription->setFont(font2);
        errorDescription->setStyleSheet(QString::fromUtf8("background:rgb(53,53,53);\n"
"color:rgb(255,90,90);"));
        errorDescription->setFrameShape(QFrame::NoFrame);
        errorDescription->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(errorDescription, 13, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 6, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 10, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_2, 12, 0, 1, 1);

        pushButton = new QPushButton(verticalFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(380, 50));
        QPalette palette1;
        QBrush brush11(QColor(0, 0, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        QLinearGradient gradient(0.511, 0, 0.511773, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(215, 243, 89, 255));
        gradient.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush12(gradient);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush12);
        QBrush brush13(QColor(115, 255, 190, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush13);
        QBrush brush14(QColor(62, 247, 161, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        QBrush brush15(QColor(4, 120, 66, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush15);
        QBrush brush16(QColor(6, 160, 88, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        QLinearGradient gradient1(0.511, 0, 0.511773, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(215, 243, 89, 255));
        gradient1.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush17(gradient1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush17);
        QLinearGradient gradient2(0.511, 0, 0.511773, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(215, 243, 89, 255));
        gradient2.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush18(gradient2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush11);
        QBrush brush19(QColor(132, 247, 193, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush19);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        QLinearGradient gradient3(0.511, 0, 0.511773, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(215, 243, 89, 255));
        gradient3.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush20(gradient3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        QLinearGradient gradient4(0.511, 0, 0.511773, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(215, 243, 89, 255));
        gradient4.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush21(gradient4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush21);
        QLinearGradient gradient5(0.511, 0, 0.511773, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(215, 243, 89, 255));
        gradient5.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush22(gradient5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush22);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush19);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        QLinearGradient gradient6(0.511, 0, 0.511773, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(215, 243, 89, 255));
        gradient6.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush23(gradient6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush23);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        QLinearGradient gradient7(0.511, 0, 0.511773, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(215, 243, 89, 255));
        gradient7.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush24(gradient7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush24);
        QLinearGradient gradient8(0.511, 0, 0.511773, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(215, 243, 89, 255));
        gradient8.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush25(gradient8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush25);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush11);
        QBrush brush26(QColor(9, 240, 132, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush26);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        pushButton->setPalette(palette1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        pushButton->setFont(font3);
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"background:qlineargradient(spread:pad, x1:0.511, y1:0, x2:0.511773, y2:1, stop:0 rgba(215, 243, 89, 255), stop:1 rgba(95, 237, 72, 255))"));

        gridLayout->addWidget(pushButton, 15, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 16, 0, 1, 1);

        userLabel = new QLabel(verticalFrame);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(100);
        sizePolicy3.setVerticalStretch(100);
        sizePolicy3.setHeightForWidth(userLabel->sizePolicy().hasHeightForWidth());
        userLabel->setSizePolicy(sizePolicy3);
        userLabel->setMinimumSize(QSize(0, 0));
        userLabel->setMaximumSize(QSize(16777215, 30));
        userLabel->setFont(font1);
        userLabel->setStyleSheet(QString::fromUtf8("font: 13pt \"Segoe UI Emoji\";\n"
"background:rgb(53,53,53);\n"
"color:white;\n"
""));

        gridLayout->addWidget(userLabel, 5, 0, 1, 1, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        loginButton = new QPushButton(verticalFrame);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        sizePolicy2.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy2);
        loginButton->setMinimumSize(QSize(380, 50));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        QLinearGradient gradient9(0.494, 1, 0.472, 0);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(243, 89, 89, 255));
        gradient9.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush27(gradient9);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush27);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush15);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        QLinearGradient gradient10(0.494, 1, 0.472, 0);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(243, 89, 89, 255));
        gradient10.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush28(gradient10);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush28);
        QLinearGradient gradient11(0.494, 1, 0.472, 0);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(243, 89, 89, 255));
        gradient11.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush29(gradient11);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush29);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush11);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush19);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        QLinearGradient gradient12(0.494, 1, 0.472, 0);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(243, 89, 89, 255));
        gradient12.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush30(gradient12);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush30);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        QLinearGradient gradient13(0.494, 1, 0.472, 0);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(243, 89, 89, 255));
        gradient13.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush31(gradient13);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush31);
        QLinearGradient gradient14(0.494, 1, 0.472, 0);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(243, 89, 89, 255));
        gradient14.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush32(gradient14);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush32);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        QLinearGradient gradient15(0.494, 1, 0.472, 0);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(243, 89, 89, 255));
        gradient15.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush33(gradient15);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush33);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        QLinearGradient gradient16(0.494, 1, 0.472, 0);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(243, 89, 89, 255));
        gradient16.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush34(gradient16);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush34);
        QLinearGradient gradient17(0.494, 1, 0.472, 0);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(243, 89, 89, 255));
        gradient17.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush35(gradient17);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush35);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush26);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        loginButton->setPalette(palette2);
        loginButton->setFont(font3);
        loginButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background:qlineargradient(spread:pad, x1:0.494, y1:1, x2:0.472, y2:0, stop:0 rgba(243, 89, 89, 255), stop:1 rgba(237, 128, 72, 255));\n"
"font: 12pt \"Segoe UI Emoji\";"));

        gridLayout->addWidget(loginButton, 17, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 8, 0, 1, 1);

        passText = new QLineEdit(verticalFrame);
        passText->setObjectName(QString::fromUtf8("passText"));
        sizePolicy2.setHeightForWidth(passText->sizePolicy().hasHeightForWidth());
        passText->setSizePolicy(sizePolicy2);
        passText->setMinimumSize(QSize(0, 30));
        passText->setMaximumSize(QSize(550, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        passText->setFont(font4);
        passText->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background: white;"));
        passText->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passText, 11, 0, 1, 1);

        userText = new QLineEdit(verticalFrame);
        userText->setObjectName(QString::fromUtf8("userText"));
        sizePolicy3.setHeightForWidth(userText->sizePolicy().hasHeightForWidth());
        userText->setSizePolicy(sizePolicy3);
        userText->setMinimumSize(QSize(0, 30));
        userText->setMaximumSize(QSize(550, 30));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font5.setPointSize(12);
        font5.setBold(false);
        font5.setWeight(50);
        userText->setFont(font5);
        userText->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background: white;"));
        userText->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(userText, 7, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_10, 18, 0, 1, 1);


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
        picture->setText(QString());
        pictureDescription->setText(QCoreApplication::translate("RegisterWindow", "Drop your profile picture above", nullptr));
        passLabel->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        errorDescription->setText(QCoreApplication::translate("RegisterWindow", "Sorry, already existing username", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterWindow", "Sign up", nullptr));
        userLabel->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        loginButton->setText(QCoreApplication::translate("RegisterWindow", "Already registered?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
