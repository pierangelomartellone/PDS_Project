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
#include <QtGui/QIcon>
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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileExplorerWindow
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label1;
    QLabel *loadDesc;
    QTableView *fileList;
    QSpacerItem *verticalSpacer_3;
    QToolButton *toolButton;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *newFilePic;
    QPushButton *newFileButton;
    QFrame *line_2;
    QFrame *frame_2;
    QLabel *myimage;
    QLabel *myuserText;
    QHBoxLayout *horizontalLayout_2;
    QLabel *loadFilePic;
    QPushButton *loadFileButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label1_2;
    QLabel *loadDesc_2;
    QLineEdit *URILineEdit;
    QLabel *errorDescription;
    QHBoxLayout *horizontalLayout_4;
    QLabel *loadFilePic_2;
    QPushButton *loadFileURIButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FileExplorerWindow)
    {
        if (FileExplorerWindow->objectName().isEmpty())
            FileExplorerWindow->setObjectName(QString::fromUtf8("FileExplorerWindow"));
        FileExplorerWindow->resize(1310, 851);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FileExplorerWindow->sizePolicy().hasHeightForWidth());
        FileExplorerWindow->setSizePolicy(sizePolicy);
        FileExplorerWindow->setAutoFillBackground(false);
        FileExplorerWindow->setStyleSheet(QString::fromUtf8(""));
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
        frame->setMinimumSize(QSize(879, 600));
        frame->setMaximumSize(QSize(800, 676));
        frame->setSizeIncrement(QSize(0, 0));
        frame->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-radius: 30px;\n"
"color:black;"));
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 3, 20, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        label1 = new QLabel(frame);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setMinimumSize(QSize(300, 54));
        label1->setMaximumSize(QSize(300, 40));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
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
        QBrush brush3(QColor(0, 0, 0, 128));
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
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        label1->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label1->setFont(font);
        label1->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI Emoji\";\n"
""));
        label1->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label1, 0, Qt::AlignHCenter);

        loadDesc = new QLabel(frame);
        loadDesc->setObjectName(QString::fromUtf8("loadDesc"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loadDesc->sizePolicy().hasHeightForWidth());
        loadDesc->setSizePolicy(sizePolicy2);
        loadDesc->setMinimumSize(QSize(300, 40));
        loadDesc->setMaximumSize(QSize(300, 40));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        loadDesc->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        loadDesc->setFont(font1);
        loadDesc->setStyleSheet(QString::fromUtf8("font: 13pt \"Segoe UI Emoji\";"));
        loadDesc->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(loadDesc, 0, Qt::AlignHCenter);

        fileList = new QTableView(frame);
        fileList->setObjectName(QString::fromUtf8("fileList"));
        sizePolicy1.setHeightForWidth(fileList->sizePolicy().hasHeightForWidth());
        fileList->setSizePolicy(sizePolicy1);
        fileList->setMinimumSize(QSize(323, 200));
        fileList->setMaximumSize(QSize(300, 200));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush8(QColor(206, 211, 217, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        fileList->setPalette(palette2);
        QFont font2;
        font2.setPointSize(12);
        font2.setItalic(true);
        fileList->setFont(font2);
        fileList->setContextMenuPolicy(Qt::DefaultContextMenu);
        fileList->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-radius: 5px;\n"
"border:1px solid black;\n"
""));
        fileList->setFrameShape(QFrame::Box);
        fileList->setFrameShadow(QFrame::Raised);
        fileList->setTabKeyNavigation(false);
        fileList->setDragEnabled(false);
        fileList->setShowGrid(false);
        fileList->horizontalHeader()->setVisible(false);
        fileList->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(fileList, 0, Qt::AlignHCenter);


        gridLayout_2->addLayout(verticalLayout, 2, 0, 3, 1);

        verticalSpacer_3 = new QSpacerItem(0, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 5, 2, 1, 1);

        toolButton = new QToolButton(frame);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(0, 27));
        toolButton->setMaximumSize(QSize(53, 43));
        toolButton->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"color:white;\n"
"border:1px solid black;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/user-settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(41, 42));

        gridLayout_2->addWidget(toolButton, 1, 3, 1, 1);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy3);
        line->setMinimumSize(QSize(2, 0));
        line->setMaximumSize(QSize(2, 450));
        line->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"border-radius: 20px;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 1, 5, 1, Qt::AlignHCenter);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, -1, -1, -1);
        newFilePic = new QLabel(frame);
        newFilePic->setObjectName(QString::fromUtf8("newFilePic"));
        newFilePic->setEnabled(true);
        sizePolicy2.setHeightForWidth(newFilePic->sizePolicy().hasHeightForWidth());
        newFilePic->setSizePolicy(sizePolicy2);
        newFilePic->setMinimumSize(QSize(30, 30));
        newFilePic->setMaximumSize(QSize(50, 50));
        newFilePic->setSizeIncrement(QSize(0, 0));
        newFilePic->setPixmap(QPixmap(QString::fromUtf8("images/new.png")));
        newFilePic->setScaledContents(true);
        newFilePic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(newFilePic, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        newFileButton = new QPushButton(frame);
        newFileButton->setObjectName(QString::fromUtf8("newFileButton"));
        sizePolicy2.setHeightForWidth(newFileButton->sizePolicy().hasHeightForWidth());
        newFileButton->setSizePolicy(sizePolicy2);
        newFileButton->setMinimumSize(QSize(300, 50));
        newFileButton->setMaximumSize(QSize(300, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        newFileButton->setFont(font3);
        newFileButton->setCursor(QCursor(Qt::PointingHandCursor));
        newFileButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background:rgb(240,241,243);\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"color:black;"));
        newFileButton->setFlat(false);

        horizontalLayout_3->addWidget(newFileButton);


        gridLayout_2->addLayout(horizontalLayout_3, 6, 2, 1, 2);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy4);
        line_2->setMinimumSize(QSize(240, 2));
        line_2->setMaximumSize(QSize(600, 2));
        line_2->setStyleSheet(QString::fromUtf8("background:grey;\n"
"border-radius: 20px;"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 4, 2, 1, 1, Qt::AlignRight);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 150));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        myimage = new QLabel(frame_2);
        myimage->setObjectName(QString::fromUtf8("myimage"));
        myimage->setGeometry(QRect(380, 60, 101, 95));
        sizePolicy2.setHeightForWidth(myimage->sizePolicy().hasHeightForWidth());
        myimage->setSizePolicy(sizePolicy2);
        myimage->setMinimumSize(QSize(101, 83));
        myimage->setMaximumSize(QSize(107, 95));
        myimage->setBaseSize(QSize(0, 0));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        myimage->setPalette(palette3);
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        myimage->setFont(font4);
        myimage->setStyleSheet(QString::fromUtf8("color:black;"));
        myimage->setScaledContents(true);
        myimage->setAlignment(Qt::AlignCenter);
        myimage->setMargin(0);
        myuserText = new QLabel(frame_2);
        myuserText->setObjectName(QString::fromUtf8("myuserText"));
        myuserText->setGeometry(QRect(300, 0, 300, 44));
        sizePolicy2.setHeightForWidth(myuserText->sizePolicy().hasHeightForWidth());
        myuserText->setSizePolicy(sizePolicy2);
        myuserText->setMinimumSize(QSize(142, 44));
        myuserText->setMaximumSize(QSize(300, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush15(QColor(0, 0, 0, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush16(QColor(0, 0, 0, 128));
        brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush17(QColor(0, 0, 0, 128));
        brush17.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        myuserText->setPalette(palette4);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font5.setPointSize(20);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        font5.setKerning(true);
        myuserText->setFont(font5);
        myuserText->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI Emoji\";\n"
"color: black;"));
        myuserText->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(frame_2, 1, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(14, -1, 0, -1);
        loadFilePic = new QLabel(frame);
        loadFilePic->setObjectName(QString::fromUtf8("loadFilePic"));
        loadFilePic->setEnabled(true);
        sizePolicy2.setHeightForWidth(loadFilePic->sizePolicy().hasHeightForWidth());
        loadFilePic->setSizePolicy(sizePolicy2);
        loadFilePic->setMinimumSize(QSize(38, 30));
        loadFilePic->setMaximumSize(QSize(50, 50));
        loadFilePic->setLineWidth(0);
        loadFilePic->setMidLineWidth(0);
        loadFilePic->setPixmap(QPixmap(QString::fromUtf8("images/open.png")));
        loadFilePic->setScaledContents(true);
        loadFilePic->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(loadFilePic, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        loadFileButton = new QPushButton(frame);
        loadFileButton->setObjectName(QString::fromUtf8("loadFileButton"));
        sizePolicy2.setHeightForWidth(loadFileButton->sizePolicy().hasHeightForWidth());
        loadFileButton->setSizePolicy(sizePolicy2);
        loadFileButton->setMinimumSize(QSize(290, 50));
        loadFileButton->setMaximumSize(QSize(300, 50));
        loadFileButton->setFont(font3);
        loadFileButton->setCursor(QCursor(Qt::PointingHandCursor));
        loadFileButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background:rgb(54,161,240);\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"color:white;"));

        horizontalLayout_2->addWidget(loadFileButton, 0, Qt::AlignVCenter);


        gridLayout_2->addLayout(horizontalLayout_2, 6, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label1_2 = new QLabel(frame);
        label1_2->setObjectName(QString::fromUtf8("label1_2"));
        sizePolicy2.setHeightForWidth(label1_2->sizePolicy().hasHeightForWidth());
        label1_2->setSizePolicy(sizePolicy2);
        label1_2->setMinimumSize(QSize(300, 40));
        label1_2->setMaximumSize(QSize(300, 40));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush18(QColor(0, 0, 0, 128));
        brush18.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush19(QColor(0, 0, 0, 128));
        brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush19);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush20(QColor(0, 0, 0, 128));
        brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush20);
#endif
        label1_2->setPalette(palette5);
        label1_2->setFont(font);
        label1_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI Emoji\";\n"
""));
        label1_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(label1_2, 0, Qt::AlignHCenter);

        loadDesc_2 = new QLabel(frame);
        loadDesc_2->setObjectName(QString::fromUtf8("loadDesc_2"));
        sizePolicy2.setHeightForWidth(loadDesc_2->sizePolicy().hasHeightForWidth());
        loadDesc_2->setSizePolicy(sizePolicy2);
        loadDesc_2->setMinimumSize(QSize(300, 40));
        loadDesc_2->setMaximumSize(QSize(300, 40));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush21(QColor(0, 0, 0, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush21);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush22(QColor(0, 0, 0, 128));
        brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush22);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush23(QColor(0, 0, 0, 128));
        brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush23);
#endif
        loadDesc_2->setPalette(palette6);
        loadDesc_2->setFont(font3);
        loadDesc_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI Emoji\";\n"
""));
        loadDesc_2->setScaledContents(false);
        loadDesc_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(loadDesc_2);

        URILineEdit = new QLineEdit(frame);
        URILineEdit->setObjectName(QString::fromUtf8("URILineEdit"));
        URILineEdit->setEnabled(true);
        sizePolicy2.setHeightForWidth(URILineEdit->sizePolicy().hasHeightForWidth());
        URILineEdit->setSizePolicy(sizePolicy2);
        URILineEdit->setMinimumSize(QSize(360, 50));
        URILineEdit->setMaximumSize(QSize(360, 50));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush24(QColor(0, 0, 0, 128));
        brush24.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush24);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush25(QColor(0, 0, 0, 128));
        brush25.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush25);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush26(QColor(0, 0, 0, 128));
        brush26.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
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
"background: white;\n"
"border:1px solid black;"));

        verticalLayout_2->addWidget(URILineEdit, 0, Qt::AlignHCenter);

        errorDescription = new QLabel(frame);
        errorDescription->setObjectName(QString::fromUtf8("errorDescription"));
        errorDescription->setEnabled(true);
        sizePolicy4.setHeightForWidth(errorDescription->sizePolicy().hasHeightForWidth());
        errorDescription->setSizePolicy(sizePolicy4);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush27(QColor(255, 0, 0, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush27);
        QBrush brush28(QColor(212, 0, 0, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush28);
        QBrush brush29(QColor(85, 0, 0, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush29);
        QBrush brush30(QColor(113, 0, 0, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush30);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush31(QColor(212, 127, 127, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush31);
        QBrush brush32(QColor(255, 255, 220, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush32);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush33(QColor(85, 255, 255, 128));
        brush33.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush33);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush27);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush28);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush29);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush30);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush31);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush32);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush34(QColor(0, 0, 0, 128));
        brush34.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush34);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush27);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush28);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush29);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush30);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush35(QColor(170, 0, 0, 255));
        brush35.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush35);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush32);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush34);
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


        gridLayout_2->addLayout(verticalLayout_2, 2, 2, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(5, -1, 0, -1);
        loadFilePic_2 = new QLabel(frame);
        loadFilePic_2->setObjectName(QString::fromUtf8("loadFilePic_2"));
        loadFilePic_2->setEnabled(true);
        sizePolicy2.setHeightForWidth(loadFilePic_2->sizePolicy().hasHeightForWidth());
        loadFilePic_2->setSizePolicy(sizePolicy2);
        loadFilePic_2->setMinimumSize(QSize(30, 30));
        loadFilePic_2->setMaximumSize(QSize(50, 50));
        loadFilePic_2->setPixmap(QPixmap(QString::fromUtf8("images/uri.png")));
        loadFilePic_2->setScaledContents(true);
        loadFilePic_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(loadFilePic_2);

        loadFileURIButton = new QPushButton(frame);
        loadFileURIButton->setObjectName(QString::fromUtf8("loadFileURIButton"));
        sizePolicy2.setHeightForWidth(loadFileURIButton->sizePolicy().hasHeightForWidth());
        loadFileURIButton->setSizePolicy(sizePolicy2);
        loadFileURIButton->setMinimumSize(QSize(300, 50));
        loadFileURIButton->setMaximumSize(QSize(300, 50));
        loadFileURIButton->setFont(font3);
        loadFileURIButton->setCursor(QCursor(Qt::PointingHandCursor));
        loadFileURIButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background:rgb(54,161,240);\n"
"font: 12pt \"Segoe UI Emoji\";\n"
"color: white;"));

        horizontalLayout_4->addWidget(loadFileURIButton);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 2, 1, 2);

        verticalSpacer = new QSpacerItem(20, 65, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 7, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 2, 1, 1);

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
        label1->setText(QCoreApplication::translate("FileExplorerWindow", "Your Files", nullptr));
        loadDesc->setText(QCoreApplication::translate("FileExplorerWindow", "Select a file, then press Load file", nullptr));
        toolButton->setText(QString());
        newFilePic->setText(QString());
        newFileButton->setText(QCoreApplication::translate("FileExplorerWindow", "New File", nullptr));
        myimage->setText(QCoreApplication::translate("FileExplorerWindow", "TextLabel", nullptr));
        myuserText->setText(QString());
        loadFilePic->setText(QString());
        loadFileButton->setText(QCoreApplication::translate("FileExplorerWindow", "Load from List", nullptr));
        label1_2->setText(QCoreApplication::translate("FileExplorerWindow", "Load from URI", nullptr));
        loadDesc_2->setText(QCoreApplication::translate("FileExplorerWindow", "Paste an URI, then press Load File", nullptr));
#if QT_CONFIG(accessibility)
        URILineEdit->setAccessibleDescription(QCoreApplication::translate("FileExplorerWindow", "Your URI", nullptr));
#endif // QT_CONFIG(accessibility)
        URILineEdit->setPlaceholderText(QCoreApplication::translate("FileExplorerWindow", "Paste your URI here", nullptr));
        errorDescription->setText(QString());
        loadFilePic_2->setText(QString());
        loadFileURIButton->setText(QCoreApplication::translate("FileExplorerWindow", "Load from URI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileExplorerWindow: public Ui_FileExplorerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEXPLORERWINDOW_H
