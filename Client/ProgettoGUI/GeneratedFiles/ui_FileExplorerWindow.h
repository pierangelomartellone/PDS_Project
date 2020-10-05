/********************************************************************************
** Form generated from reading UI file 'FileExplorerWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEEXPLORERWINDOW_H
#define UI_FILEEXPLORERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileExplorerWindow
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *myuserText;
    QLabel *myimage;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QLabel *loadFilePic_2;
    QPushButton *loadFileURIButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *loadFilePic;
    QPushButton *loadFileButton;
    QVBoxLayout *verticalLayout;
    QLabel *label1;
    QLabel *loadDesc;
    QTableView *fileList;
    QHBoxLayout *horizontalLayout_3;
    QLabel *newFilePic;
    QPushButton *newFileButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label1_2;
    QLabel *loadDesc_2;
    QLineEdit *URILineEdit;
    QLabel *errorDescription;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *FileExplorerWindow)
    {
        if (FileExplorerWindow->objectName().isEmpty())
            FileExplorerWindow->setObjectName(QString::fromUtf8("FileExplorerWindow"));
        FileExplorerWindow->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FileExplorerWindow->sizePolicy().hasHeightForWidth());
        FileExplorerWindow->setSizePolicy(sizePolicy);
        FileExplorerWindow->setAutoFillBackground(false);
        FileExplorerWindow->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0.103, y1:0.914409, x2:1, y2:0,\n"
"stop:0 rgba(158, 46, 37, 255),\n"
"stop:0.745946 rgba(255, 87, 34, 255),\n"
"stop:1 rgba(255, 180, 74, 255));"));
        gridLayout = new QGridLayout(FileExplorerWindow);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(FileExplorerWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(800, 600));
        frame->setMaximumSize(QSize(800, 530));
        frame->setSizeIncrement(QSize(0, 0));
        frame->setStyleSheet(QString::fromUtf8("background:rgb(53,53,53);\n"
"border-radius: 30px;"));
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 3, 20, -1);
        verticalSpacer_3 = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 5, 2, 1, 1);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy2);
        line_2->setMinimumSize(QSize(0, 2));
        line_2->setMaximumSize(QSize(500, 2));
        line_2->setStyleSheet(QString::fromUtf8("background:#ff632d;\n"
"border-radius: 20px;"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 4, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_3->setContentsMargins(0, -1, 0, -1);
        myuserText = new QLabel(frame);
        myuserText->setObjectName(QString::fromUtf8("myuserText"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(myuserText->sizePolicy().hasHeightForWidth());
        myuserText->setSizePolicy(sizePolicy3);
        myuserText->setMinimumSize(QSize(300, 30));
        myuserText->setMaximumSize(QSize(300, 30));
        QPalette palette;
        QBrush brush(QColor(255, 99, 45, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(53, 53, 53, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 99, 45, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(255, 99, 45, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(255, 99, 45, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        myuserText->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setKerning(true);
        myuserText->setFont(font);
        myuserText->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI Emoji\";\n"
"color: #ff632d;"));
        myuserText->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(myuserText, 0, Qt::AlignHCenter|Qt::AlignBottom);

        myimage = new QLabel(frame);
        myimage->setObjectName(QString::fromUtf8("myimage"));
        sizePolicy3.setHeightForWidth(myimage->sizePolicy().hasHeightForWidth());
        myimage->setSizePolicy(sizePolicy3);
        myimage->setMinimumSize(QSize(80, 80));
        myimage->setMaximumSize(QSize(80, 80));
        QPalette palette1;
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush6(QColor(120, 120, 120, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        myimage->setPalette(palette1);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        myimage->setFont(font1);
        myimage->setScaledContents(true);
        myimage->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(myimage, 0, Qt::AlignHCenter|Qt::AlignBottom);


        gridLayout_2->addLayout(verticalLayout_3, 1, 0, 1, 3);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy4);
        line->setMinimumSize(QSize(2, 0));
        line->setMaximumSize(QSize(2, 450));
        line->setStyleSheet(QString::fromUtf8("background-color: #ff632d;\n"
"border-radius: 20px;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 1, 5, 1, Qt::AlignHCenter);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(5, -1, 0, -1);
        loadFilePic_2 = new QLabel(frame);
        loadFilePic_2->setObjectName(QString::fromUtf8("loadFilePic_2"));
        loadFilePic_2->setEnabled(true);
        sizePolicy3.setHeightForWidth(loadFilePic_2->sizePolicy().hasHeightForWidth());
        loadFilePic_2->setSizePolicy(sizePolicy3);
        loadFilePic_2->setMinimumSize(QSize(30, 30));
        loadFilePic_2->setMaximumSize(QSize(50, 50));
        loadFilePic_2->setPixmap(QPixmap(QString::fromUtf8("images/uri.png")));
        loadFilePic_2->setScaledContents(true);
        loadFilePic_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(loadFilePic_2);

        loadFileURIButton = new QPushButton(frame);
        loadFileURIButton->setObjectName(QString::fromUtf8("loadFileURIButton"));
        sizePolicy3.setHeightForWidth(loadFileURIButton->sizePolicy().hasHeightForWidth());
        loadFileURIButton->setSizePolicy(sizePolicy3);
        loadFileURIButton->setMinimumSize(QSize(300, 50));
        loadFileURIButton->setMaximumSize(QSize(300, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        loadFileURIButton->setFont(font2);
        loadFileURIButton->setCursor(QCursor(Qt::PointingHandCursor));
        loadFileURIButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background:qlineargradient(spread:pad, x1:0.494, y1:1, x2:0.472, y2:0, stop:0 rgba(243, 89, 89, 255), stop:1 rgba(237, 128, 72, 255));\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"color: white;"));

        horizontalLayout_4->addWidget(loadFileURIButton);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(14, -1, 0, -1);
        loadFilePic = new QLabel(frame);
        loadFilePic->setObjectName(QString::fromUtf8("loadFilePic"));
        loadFilePic->setEnabled(true);
        sizePolicy3.setHeightForWidth(loadFilePic->sizePolicy().hasHeightForWidth());
        loadFilePic->setSizePolicy(sizePolicy3);
        loadFilePic->setMinimumSize(QSize(30, 30));
        loadFilePic->setMaximumSize(QSize(50, 50));
        loadFilePic->setLineWidth(0);
        loadFilePic->setMidLineWidth(0);
        loadFilePic->setPixmap(QPixmap(QString::fromUtf8("images/open.png")));
        loadFilePic->setScaledContents(true);
        loadFilePic->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(loadFilePic, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        loadFileButton = new QPushButton(frame);
        loadFileButton->setObjectName(QString::fromUtf8("loadFileButton"));
        sizePolicy3.setHeightForWidth(loadFileButton->sizePolicy().hasHeightForWidth());
        loadFileButton->setSizePolicy(sizePolicy3);
        loadFileButton->setMinimumSize(QSize(300, 50));
        loadFileButton->setMaximumSize(QSize(300, 50));
        loadFileButton->setFont(font2);
        loadFileButton->setCursor(QCursor(Qt::PointingHandCursor));
        loadFileButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background:qlineargradient(spread:pad, x1:0.494, y1:1, x2:0.472, y2:0, stop:0 rgba(243, 89, 89, 255), stop:1 rgba(237, 128, 72, 255));\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"color:white;"));

        horizontalLayout_2->addWidget(loadFileButton, 0, Qt::AlignVCenter);


        gridLayout_2->addLayout(horizontalLayout_2, 6, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(30, -1, -1, -1);
        label1 = new QLabel(frame);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setMinimumSize(QSize(300, 40));
        label1->setMaximumSize(QSize(300, 40));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label1->setPalette(palette2);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label1->setFont(font3);
        label1->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI Emoji\";\n"
""));
        label1->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label1, 0, Qt::AlignHCenter);

        loadDesc = new QLabel(frame);
        loadDesc->setObjectName(QString::fromUtf8("loadDesc"));
        sizePolicy3.setHeightForWidth(loadDesc->sizePolicy().hasHeightForWidth());
        loadDesc->setSizePolicy(sizePolicy3);
        loadDesc->setMinimumSize(QSize(300, 40));
        loadDesc->setMaximumSize(QSize(300, 40));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        loadDesc->setPalette(palette3);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font4.setPointSize(13);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        loadDesc->setFont(font4);
        loadDesc->setStyleSheet(QString::fromUtf8("font: 13pt \"Segoe UI Emoji\";"));
        loadDesc->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(loadDesc, 0, Qt::AlignHCenter);

        fileList = new QTableView(frame);
        fileList->setObjectName(QString::fromUtf8("fileList"));
        sizePolicy1.setHeightForWidth(fileList->sizePolicy().hasHeightForWidth());
        fileList->setSizePolicy(sizePolicy1);
        fileList->setMinimumSize(QSize(300, 200));
        fileList->setMaximumSize(QSize(300, 200));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush5);
        QBrush brush7(QColor(206, 211, 217, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        fileList->setPalette(palette4);
        QFont font5;
        font5.setPointSize(12);
        font5.setItalic(true);
        fileList->setFont(font5);
        fileList->setContextMenuPolicy(Qt::DefaultContextMenu);
        fileList->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-radius: 5px;"));
        fileList->setFrameShape(QFrame::Box);
        fileList->setFrameShadow(QFrame::Raised);
        fileList->setTabKeyNavigation(false);
        fileList->setDragEnabled(false);
        fileList->setShowGrid(false);
        fileList->horizontalHeader()->setVisible(false);
        fileList->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(fileList, 0, Qt::AlignHCenter);


        gridLayout_2->addLayout(verticalLayout, 2, 0, 3, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, -1, -1, -1);
        newFilePic = new QLabel(frame);
        newFilePic->setObjectName(QString::fromUtf8("newFilePic"));
        newFilePic->setEnabled(true);
        sizePolicy3.setHeightForWidth(newFilePic->sizePolicy().hasHeightForWidth());
        newFilePic->setSizePolicy(sizePolicy3);
        newFilePic->setMinimumSize(QSize(30, 30));
        newFilePic->setMaximumSize(QSize(50, 50));
        newFilePic->setSizeIncrement(QSize(0, 0));
        newFilePic->setPixmap(QPixmap(QString::fromUtf8("images/new.png")));
        newFilePic->setScaledContents(true);
        newFilePic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(newFilePic, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        newFileButton = new QPushButton(frame);
        newFileButton->setObjectName(QString::fromUtf8("newFileButton"));
        sizePolicy3.setHeightForWidth(newFileButton->sizePolicy().hasHeightForWidth());
        newFileButton->setSizePolicy(sizePolicy3);
        newFileButton->setMinimumSize(QSize(300, 50));
        newFileButton->setMaximumSize(QSize(300, 50));
        newFileButton->setFont(font2);
        newFileButton->setCursor(QCursor(Qt::PointingHandCursor));
        newFileButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background:qlineargradient(spread:pad, x1:0.494, y1:1, x2:0.472, y2:0, stop:0 rgba(243, 89, 89, 255), stop:1 rgba(237, 128, 72, 255));\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"color:white;"));
        newFileButton->setFlat(false);

        horizontalLayout_3->addWidget(newFileButton);


        gridLayout_2->addLayout(horizontalLayout_3, 6, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label1_2 = new QLabel(frame);
        label1_2->setObjectName(QString::fromUtf8("label1_2"));
        sizePolicy3.setHeightForWidth(label1_2->sizePolicy().hasHeightForWidth());
        label1_2->setSizePolicy(sizePolicy3);
        label1_2->setMinimumSize(QSize(300, 40));
        label1_2->setMaximumSize(QSize(300, 40));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label1_2->setPalette(palette5);
        label1_2->setFont(font3);
        label1_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI Emoji\";\n"
""));
        label1_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(label1_2, 0, Qt::AlignHCenter);

        loadDesc_2 = new QLabel(frame);
        loadDesc_2->setObjectName(QString::fromUtf8("loadDesc_2"));
        sizePolicy3.setHeightForWidth(loadDesc_2->sizePolicy().hasHeightForWidth());
        loadDesc_2->setSizePolicy(sizePolicy3);
        loadDesc_2->setMinimumSize(QSize(300, 40));
        loadDesc_2->setMaximumSize(QSize(300, 40));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        loadDesc_2->setPalette(palette6);
        loadDesc_2->setFont(font2);
        loadDesc_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI Emoji\";\n"
""));
        loadDesc_2->setScaledContents(false);
        loadDesc_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(loadDesc_2, 0, Qt::AlignHCenter);

        URILineEdit = new QLineEdit(frame);
        URILineEdit->setObjectName(QString::fromUtf8("URILineEdit"));
        URILineEdit->setEnabled(true);
        sizePolicy3.setHeightForWidth(URILineEdit->sizePolicy().hasHeightForWidth());
        URILineEdit->setSizePolicy(sizePolicy3);
        URILineEdit->setMinimumSize(QSize(360, 50));
        URILineEdit->setMaximumSize(QSize(360, 50));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        URILineEdit->setPalette(palette7);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        URILineEdit->setFont(font6);
        URILineEdit->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"font: 10pt \"Segoe UI Emoji\";\n"
"background: white;"));

        verticalLayout_2->addWidget(URILineEdit, 0, Qt::AlignHCenter);

        errorDescription = new QLabel(frame);
        errorDescription->setObjectName(QString::fromUtf8("errorDescription"));
        errorDescription->setEnabled(true);
        sizePolicy2.setHeightForWidth(errorDescription->sizePolicy().hasHeightForWidth());
        errorDescription->setSizePolicy(sizePolicy2);
        QPalette palette8;
        QBrush brush8(QColor(170, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush9(QColor(255, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush9);
        QBrush brush10(QColor(212, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        QBrush brush11(QColor(85, 0, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(113, 0, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush5);
        QBrush brush13(QColor(0, 0, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush13);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush13);
        QBrush brush14(QColor(212, 127, 127, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        QBrush brush15(QColor(255, 255, 220, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush15);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush13);
        QBrush brush16(QColor(85, 255, 255, 128));
        brush16.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush15);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush13);
        QBrush brush17(QColor(0, 0, 0, 128));
        brush17.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush17);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush15);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush13);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        errorDescription->setPalette(palette8);
        QFont font7;
        font7.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setItalic(true);
        font7.setWeight(75);
        errorDescription->setFont(font7);
        errorDescription->setStyleSheet(QString::fromUtf8(""));
        errorDescription->setFrameShape(QFrame::NoFrame);
        errorDescription->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(errorDescription);


        gridLayout_2->addLayout(verticalLayout_2, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(0, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 7, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 7, 2, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        QWidget::setTabOrder(fileList, loadFileButton);
        QWidget::setTabOrder(loadFileButton, URILineEdit);
        QWidget::setTabOrder(URILineEdit, loadFileURIButton);
        QWidget::setTabOrder(loadFileURIButton, newFileButton);

        retranslateUi(FileExplorerWindow);

        newFileButton->setDefault(false);


        QMetaObject::connectSlotsByName(FileExplorerWindow);
    } // setupUi

    void retranslateUi(QWidget *FileExplorerWindow)
    {
        FileExplorerWindow->setWindowTitle(QCoreApplication::translate("FileExplorerWindow", "Files", nullptr));
        myuserText->setText(QString());
        myimage->setText(QCoreApplication::translate("FileExplorerWindow", "TextLabel", nullptr));
        loadFilePic_2->setText(QString());
        loadFileURIButton->setText(QCoreApplication::translate("FileExplorerWindow", "Load from URI", nullptr));
        loadFilePic->setText(QString());
        loadFileButton->setText(QCoreApplication::translate("FileExplorerWindow", "Load from List", nullptr));
        label1->setText(QCoreApplication::translate("FileExplorerWindow", "Your Files", nullptr));
        loadDesc->setText(QCoreApplication::translate("FileExplorerWindow", "Select a file, then press Load file", nullptr));
        newFilePic->setText(QString());
        newFileButton->setText(QCoreApplication::translate("FileExplorerWindow", "New File", nullptr));
        label1_2->setText(QCoreApplication::translate("FileExplorerWindow", "Load from URI", nullptr));
        loadDesc_2->setText(QCoreApplication::translate("FileExplorerWindow", "Paste an URI, then press Load File", nullptr));
#if QT_CONFIG(accessibility)
        URILineEdit->setAccessibleDescription(QCoreApplication::translate("FileExplorerWindow", "Your URI", nullptr));
#endif // QT_CONFIG(accessibility)
        URILineEdit->setPlaceholderText(QCoreApplication::translate("FileExplorerWindow", "Paste your URI here", nullptr));
        errorDescription->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FileExplorerWindow: public Ui_FileExplorerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEXPLORERWINDOW_H
