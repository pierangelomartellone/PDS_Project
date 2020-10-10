/********************************************************************************
** Form generated from reading UI file 'MyFirstWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
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
        MyFirstWindow->resize(1000, 600);
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
        QLinearGradient gradient(0.103, 0.914409, 1, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(158, 46, 37, 255));
        gradient.setColorAt(0.745946, QColor(255, 87, 34, 255));
        gradient.setColorAt(1, QColor(255, 180, 74, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0.103, 0.914409, 1, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(158, 46, 37, 255));
        gradient1.setColorAt(0.745946, QColor(255, 87, 34, 255));
        gradient1.setColorAt(1, QColor(255, 180, 74, 255));
        QBrush brush3(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush3);
        QLinearGradient gradient2(0.103, 0.914409, 1, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(158, 46, 37, 255));
        gradient2.setColorAt(0.745946, QColor(255, 87, 34, 255));
        gradient2.setColorAt(1, QColor(255, 180, 74, 255));
        QBrush brush4(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0.103, 0.914409, 1, 0);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(158, 46, 37, 255));
        gradient3.setColorAt(0.745946, QColor(255, 87, 34, 255));
        gradient3.setColorAt(1, QColor(255, 180, 74, 255));
        QBrush brush6(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0.103, 0.914409, 1, 0);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(158, 46, 37, 255));
        gradient4.setColorAt(0.745946, QColor(255, 87, 34, 255));
        gradient4.setColorAt(1, QColor(255, 180, 74, 255));
        QBrush brush7(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        QLinearGradient gradient5(0.103, 0.914409, 1, 0);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(158, 46, 37, 255));
        gradient5.setColorAt(0.745946, QColor(255, 87, 34, 255));
        gradient5.setColorAt(1, QColor(255, 180, 74, 255));
        QBrush brush8(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QLinearGradient gradient6(0.103, 0.914409, 1, 0);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(158, 46, 37, 255));
        gradient6.setColorAt(0.745946, QColor(255, 87, 34, 255));
        gradient6.setColorAt(1, QColor(255, 180, 74, 255));
        QBrush brush9(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QLinearGradient gradient7(0.103, 0.914409, 1, 0);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(158, 46, 37, 255));
        gradient7.setColorAt(0.745946, QColor(255, 87, 34, 255));
        gradient7.setColorAt(1, QColor(255, 180, 74, 255));
        QBrush brush10(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        QLinearGradient gradient8(0.103, 0.914409, 1, 0);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(158, 46, 37, 255));
        gradient8.setColorAt(0.745946, QColor(255, 87, 34, 255));
        gradient8.setColorAt(1, QColor(255, 180, 74, 255));
        QBrush brush11(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        QBrush brush12(QColor(255, 255, 255, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        MyFirstWindow->setPalette(palette);
        MyFirstWindow->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0.103, y1:0.914409, x2:1, y2:0,\n"
"stop:0 rgba(158, 46, 37, 255),\n"
"stop:0.745946 rgba(255, 87, 34, 255),\n"
"stop:1 rgba(255, 180, 74, 255));"));
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
        QBrush brush13(QColor(53, 53, 53, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush13);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush13);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush13);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        verticalFrame->setPalette(palette1);
        QFont font;
        font.setPointSize(12);
        verticalFrame->setFont(font);
        verticalFrame->setStyleSheet(QString::fromUtf8("background:rgb(53,53,53);\n"
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
        frame_2->setMinimumSize(QSize(161, 80));
        frame_2->setMaximumSize(QSize(161, 161));
        frame_2->setStyleSheet(QString::fromUtf8("image:url(:/images/login.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_2, 0, Qt::AlignHCenter);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        userLabel = new QLabel(verticalFrame);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(userLabel->sizePolicy().hasHeightForWidth());
        userLabel->setSizePolicy(sizePolicy1);
        userLabel->setMinimumSize(QSize(0, 0));
        userLabel->setMaximumSize(QSize(16777215, 30));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush14(QColor(255, 255, 220, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush14);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        QBrush brush15(QColor(255, 255, 255, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        QBrush brush16(QColor(255, 255, 255, 128));
        brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        QBrush brush17(QColor(255, 255, 255, 128));
        brush17.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
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
"background:rgb(53,53,53);\n"
"color:(255,255,255)\n"
""));

        verticalLayout->addWidget(userLabel, 0, Qt::AlignHCenter);

        verticalSpacer_6 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        userText = new QLineEdit(verticalFrame);
        userText->setObjectName(QString::fromUtf8("userText"));
        sizePolicy1.setHeightForWidth(userText->sizePolicy().hasHeightForWidth());
        userText->setSizePolicy(sizePolicy1);
        userText->setMinimumSize(QSize(0, 0));
        userText->setMaximumSize(QSize(550, 30));
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
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        userText->setPalette(palette3);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        userText->setFont(font2);
        userText->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background: white;"));
        userText->setEchoMode(QLineEdit::Normal);

        verticalLayout->addWidget(userText);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        passLabel = new QLabel(verticalFrame);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(3);
        sizePolicy2.setHeightForWidth(passLabel->sizePolicy().hasHeightForWidth());
        passLabel->setSizePolicy(sizePolicy2);
        passLabel->setMinimumSize(QSize(0, 5));
        passLabel->setMaximumSize(QSize(16777215, 30));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush13);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush13);
        QBrush brush18(QColor(255, 255, 255, 128));
        brush18.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        QBrush brush19(QColor(255, 255, 255, 128));
        brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush19);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        QBrush brush20(QColor(255, 255, 255, 128));
        brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush20);
#endif
        passLabel->setPalette(palette4);
        passLabel->setFont(font1);
        passLabel->setLayoutDirection(Qt::LeftToRight);
        passLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI Emoji\";\n"
"color:rgb(255,255,255);\n"
"background:rgb(53,53,53);"));

        verticalLayout->addWidget(passLabel, 0, Qt::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        passText = new QLineEdit(verticalFrame);
        passText->setObjectName(QString::fromUtf8("passText"));
        sizePolicy2.setHeightForWidth(passText->sizePolicy().hasHeightForWidth());
        passText->setSizePolicy(sizePolicy2);
        passText->setMinimumSize(QSize(0, 0));
        passText->setMaximumSize(QSize(550, 30));
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
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
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
"background: white;"));
        passText->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passText);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(verticalFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(0, 0));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient9(0.511, 0, 0.511773, 1);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(215, 243, 89, 255));
        gradient9.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush21(gradient9);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush21);
        QBrush brush22(QColor(115, 255, 190, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush22);
        QBrush brush23(QColor(62, 247, 161, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush23);
        QBrush brush24(QColor(4, 120, 66, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush24);
        QBrush brush25(QColor(6, 160, 88, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient10(0.511, 0, 0.511773, 1);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(215, 243, 89, 255));
        gradient10.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush26(gradient10);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush26);
        QLinearGradient gradient11(0.511, 0, 0.511773, 1);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(215, 243, 89, 255));
        gradient11.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush27(gradient11);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush27);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        QBrush brush28(QColor(132, 247, 193, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush28);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush14);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient12(0.511, 0, 0.511773, 1);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(215, 243, 89, 255));
        gradient12.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush29(gradient12);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush29);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush22);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush23);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient13(0.511, 0, 0.511773, 1);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(215, 243, 89, 255));
        gradient13.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush30(gradient13);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush30);
        QLinearGradient gradient14(0.511, 0, 0.511773, 1);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(215, 243, 89, 255));
        gradient14.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush31(gradient14);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush31);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush28);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QLinearGradient gradient15(0.511, 0, 0.511773, 1);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(215, 243, 89, 255));
        gradient15.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush32(gradient15);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush32);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush22);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush23);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QLinearGradient gradient16(0.511, 0, 0.511773, 1);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(215, 243, 89, 255));
        gradient16.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush33(gradient16);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush33);
        QLinearGradient gradient17(0.511, 0, 0.511773, 1);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(215, 243, 89, 255));
        gradient17.setColorAt(1, QColor(95, 237, 72, 255));
        QBrush brush34(gradient17);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush34);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        QBrush brush35(QColor(9, 240, 132, 255));
        brush35.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush35);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush14);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        pushButton->setPalette(palette6);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"background:qlineargradient(spread:pad, x1:0.511, y1:0, x2:0.511773, y2:1, stop:0 rgba(215, 243, 89, 255), stop:1 rgba(95, 237, 72, 255))"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        newAccountButton = new QPushButton(verticalFrame);
        newAccountButton->setObjectName(QString::fromUtf8("newAccountButton"));
        sizePolicy2.setHeightForWidth(newAccountButton->sizePolicy().hasHeightForWidth());
        newAccountButton->setSizePolicy(sizePolicy2);
        newAccountButton->setMinimumSize(QSize(0, 0));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient18(0.494, 1, 0.472, 0);
        gradient18.setSpread(QGradient::PadSpread);
        gradient18.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient18.setColorAt(0, QColor(243, 89, 89, 255));
        gradient18.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush36(gradient18);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush36);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient19(0.494, 1, 0.472, 0);
        gradient19.setSpread(QGradient::PadSpread);
        gradient19.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient19.setColorAt(0, QColor(243, 89, 89, 255));
        gradient19.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush37(gradient19);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush37);
        QLinearGradient gradient20(0.494, 1, 0.472, 0);
        gradient20.setSpread(QGradient::PadSpread);
        gradient20.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient20.setColorAt(0, QColor(243, 89, 89, 255));
        gradient20.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush38(gradient20);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush38);
        QBrush brush39(QColor(255, 255, 255, 128));
        brush39.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush39);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient21(0.494, 1, 0.472, 0);
        gradient21.setSpread(QGradient::PadSpread);
        gradient21.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient21.setColorAt(0, QColor(243, 89, 89, 255));
        gradient21.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush40(gradient21);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush40);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient22(0.494, 1, 0.472, 0);
        gradient22.setSpread(QGradient::PadSpread);
        gradient22.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient22.setColorAt(0, QColor(243, 89, 89, 255));
        gradient22.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush41(gradient22);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush41);
        QLinearGradient gradient23(0.494, 1, 0.472, 0);
        gradient23.setSpread(QGradient::PadSpread);
        gradient23.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient23.setColorAt(0, QColor(243, 89, 89, 255));
        gradient23.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush42(gradient23);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush42);
        QBrush brush43(QColor(255, 255, 255, 128));
        brush43.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush43);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QLinearGradient gradient24(0.494, 1, 0.472, 0);
        gradient24.setSpread(QGradient::PadSpread);
        gradient24.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient24.setColorAt(0, QColor(243, 89, 89, 255));
        gradient24.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush44(gradient24);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush44);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QLinearGradient gradient25(0.494, 1, 0.472, 0);
        gradient25.setSpread(QGradient::PadSpread);
        gradient25.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient25.setColorAt(0, QColor(243, 89, 89, 255));
        gradient25.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush45(gradient25);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush45);
        QLinearGradient gradient26(0.494, 1, 0.472, 0);
        gradient26.setSpread(QGradient::PadSpread);
        gradient26.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient26.setColorAt(0, QColor(243, 89, 89, 255));
        gradient26.setColorAt(1, QColor(237, 128, 72, 255));
        QBrush brush46(gradient26);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush46);
        QBrush brush47(QColor(255, 255, 255, 128));
        brush47.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush47);
#endif
        newAccountButton->setPalette(palette7);
        newAccountButton->setFont(font1);
        newAccountButton->setCursor(QCursor(Qt::OpenHandCursor));
        newAccountButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background:qlineargradient(spread:pad, x1:0.494, y1:1, x2:0.472, y2:0, stop:0 rgba(243, 89, 89, 255), stop:1 rgba(237, 128, 72, 255));\n"
"font: 12pt \"Segoe UI Emoji\";"));

        verticalLayout->addWidget(newAccountButton);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        errorDescription = new QLabel(verticalFrame);
        errorDescription->setObjectName(QString::fromUtf8("errorDescription"));
        errorDescription->setEnabled(true);
        sizePolicy2.setHeightForWidth(errorDescription->sizePolicy().hasHeightForWidth());
        errorDescription->setSizePolicy(sizePolicy2);
        QPalette palette8;
        QBrush brush48(QColor(255, 90, 90, 255));
        brush48.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush48);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush13);
        QBrush brush49(QColor(255, 0, 0, 255));
        brush49.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush49);
        QBrush brush50(QColor(212, 0, 0, 255));
        brush50.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush50);
        QBrush brush51(QColor(85, 0, 0, 255));
        brush51.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush51);
        QBrush brush52(QColor(113, 0, 0, 255));
        brush52.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush52);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush48);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush48);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush13);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        QBrush brush53(QColor(212, 127, 127, 255));
        brush53.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush53);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush14);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        QBrush brush54(QColor(85, 255, 255, 128));
        brush54.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush54);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush48);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush49);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush50);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush51);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush52);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush48);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush48);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush53);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush14);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush48);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush49);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush50);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush51);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush52);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush48);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush48);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        QBrush brush55(QColor(170, 0, 0, 255));
        brush55.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush55);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush14);
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
        errorDescription->setStyleSheet(QString::fromUtf8("background:rgb(53,53,53);\n"
"color:rgb(255,90,90);"));
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
        newAccountButton->setText(QCoreApplication::translate("MyFirstWindow", "Nuovo account?", nullptr));
        errorDescription->setText(QCoreApplication::translate("MyFirstWindow", "Sorry, you typed wrong username or password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyFirstWindow: public Ui_MyFirstWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFIRSTWINDOW_H
