/********************************************************************************
** Form generated from reading UI file 'MyFirstWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFIRSTWINDOW_H
#define UI_MYFIRSTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFirstWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *picture;
    QVBoxLayout *verticalLayout;
    QLabel *userLabel;
    QLineEdit *userText;
    QVBoxLayout *verticalLayout_3;
    QLabel *passLabel;
    QLineEdit *passText;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *newAccountButton;
    QLabel *errorDescription;

    void setupUi(QWidget *MyFirstWindow)
    {
        if (MyFirstWindow->objectName().isEmpty())
            MyFirstWindow->setObjectName(QString::fromUtf8("MyFirstWindow"));
        MyFirstWindow->setEnabled(true);
        MyFirstWindow->resize(606, 736);
        verticalLayoutWidget = new QWidget(MyFirstWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 30, 551, 681));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        picture = new QLabel(verticalLayoutWidget);
        picture->setObjectName(QString::fromUtf8("picture"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(picture->sizePolicy().hasHeightForWidth());
        picture->setSizePolicy(sizePolicy);
        picture->setMinimumSize(QSize(100, 100));
        picture->setScaledContents(true);
        picture->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(picture);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        userLabel = new QLabel(verticalLayoutWidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(userLabel->sizePolicy().hasHeightForWidth());
        userLabel->setSizePolicy(sizePolicy1);
        userLabel->setMinimumSize(QSize(50, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        userLabel->setFont(font);

        verticalLayout->addWidget(userLabel);

        userText = new QLineEdit(verticalLayoutWidget);
        userText->setObjectName(QString::fromUtf8("userText"));
        sizePolicy.setHeightForWidth(userText->sizePolicy().hasHeightForWidth());
        userText->setSizePolicy(sizePolicy);
        userText->setMinimumSize(QSize(300, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        userText->setFont(font1);
        userText->setEchoMode(QLineEdit::Normal);

        verticalLayout->addWidget(userText);


        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        passLabel = new QLabel(verticalLayoutWidget);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(passLabel->sizePolicy().hasHeightForWidth());
        passLabel->setSizePolicy(sizePolicy2);
        passLabel->setMinimumSize(QSize(0, 50));
        passLabel->setFont(font);

        verticalLayout_3->addWidget(passLabel);

        passText = new QLineEdit(verticalLayoutWidget);
        passText->setObjectName(QString::fromUtf8("passText"));
        sizePolicy.setHeightForWidth(passText->sizePolicy().hasHeightForWidth());
        passText->setSizePolicy(sizePolicy);
        passText->setMinimumSize(QSize(300, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        passText->setFont(font2);
        passText->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(passText);


        verticalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 50, -1, -1);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(200, 50));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(9, 240, 132, 255));
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
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(132, 247, 193, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
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
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        pushButton->setPalette(palette);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_6->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 50);
        newAccountButton = new QPushButton(verticalLayoutWidget);
        newAccountButton->setObjectName(QString::fromUtf8("newAccountButton"));
        sizePolicy.setHeightForWidth(newAccountButton->sizePolicy().hasHeightForWidth());
        newAccountButton->setSizePolicy(sizePolicy);
        newAccountButton->setMinimumSize(QSize(200, 40));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font4.setBold(true);
        font4.setWeight(75);
        newAccountButton->setFont(font4);

        horizontalLayout_2->addWidget(newAccountButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        errorDescription = new QLabel(verticalLayoutWidget);
        errorDescription->setObjectName(QString::fromUtf8("errorDescription"));
        errorDescription->setEnabled(true);
        sizePolicy2.setHeightForWidth(errorDescription->sizePolicy().hasHeightForWidth());
        errorDescription->setSizePolicy(sizePolicy2);
        QPalette palette1;
        QBrush brush10(QColor(170, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(255, 0, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(212, 0, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(85, 0, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(113, 0, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush15(QColor(212, 127, 127, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush16(QColor(85, 255, 255, 128));
        brush16.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        errorDescription->setPalette(palette1);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setItalic(true);
        font5.setWeight(75);
        errorDescription->setFont(font5);
        errorDescription->setFrameShape(QFrame::NoFrame);
        errorDescription->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(errorDescription);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(3, 2);
        verticalLayout_2->setStretch(4, 1);
        verticalLayout_2->setStretch(5, 1);

        retranslateUi(MyFirstWindow);

        QMetaObject::connectSlotsByName(MyFirstWindow);
    } // setupUi

    void retranslateUi(QWidget *MyFirstWindow)
    {
        MyFirstWindow->setWindowTitle(QApplication::translate("MyFirstWindow", "MyFirstWindow", nullptr));
        picture->setText(QString());
        userLabel->setText(QApplication::translate("MyFirstWindow", "Username", nullptr));
        passLabel->setText(QApplication::translate("MyFirstWindow", "Password", nullptr));
        pushButton->setText(QApplication::translate("MyFirstWindow", "Login", nullptr));
        newAccountButton->setText(QApplication::translate("MyFirstWindow", "Nuovo account?", nullptr));
        errorDescription->setText(QApplication::translate("MyFirstWindow", "Sorry, you typed wrong username or password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyFirstWindow: public Ui_MyFirstWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFIRSTWINDOW_H
