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
    QFrame *line_2;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *newFilePic;
    QPushButton *newFileButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label1_2;
    QLabel *loadDesc_2;
    QLineEdit *URILineEdit;
    QLabel *errorDescription;
    QVBoxLayout *verticalLayout_3;
    QLabel *myuserText;
    QLabel *myimage;

    void setupUi(QWidget *FileExplorerWindow)
    {
        if (FileExplorerWindow->objectName().isEmpty())
            FileExplorerWindow->setObjectName(QString::fromUtf8("FileExplorerWindow"));
        FileExplorerWindow->resize(1232, 630);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(FileExplorerWindow->sizePolicy().hasHeightForWidth());
        FileExplorerWindow->setSizePolicy(sizePolicy);
        FileExplorerWindow->setAutoFillBackground(false);
        FileExplorerWindow->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0.103, y1:0.914409, x2:1, y2:0, stop:0 rgba(33, 119, 219, 255), stop:0.745946 rgba(103, 209, 255, 255), stop:1 rgba(252, 252, 252, 255))"));
        gridLayout = new QGridLayout(FileExplorerWindow);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(FileExplorerWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(900, 800));
        frame->setSizeIncrement(QSize(0, 0));
        frame->setStyleSheet(QString::fromUtf8("background:rgb(53,53,53);\n"
"border-radius: 30px;"));
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(5, -1, 0, -1);
        loadFilePic_2 = new QLabel(frame);
        loadFilePic_2->setObjectName(QString::fromUtf8("loadFilePic_2"));
        loadFilePic_2->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loadFilePic_2->sizePolicy().hasHeightForWidth());
        loadFilePic_2->setSizePolicy(sizePolicy1);
        loadFilePic_2->setMinimumSize(QSize(30, 30));
        loadFilePic_2->setMaximumSize(QSize(50, 50));
        loadFilePic_2->setPixmap(QPixmap(QString::fromUtf8("images/uri.png")));
        loadFilePic_2->setScaledContents(true);
        loadFilePic_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(loadFilePic_2);

        loadFileURIButton = new QPushButton(frame);
        loadFileURIButton->setObjectName(QString::fromUtf8("loadFileURIButton"));
        sizePolicy1.setHeightForWidth(loadFileURIButton->sizePolicy().hasHeightForWidth());
        loadFileURIButton->setSizePolicy(sizePolicy1);
        loadFileURIButton->setMinimumSize(QSize(200, 50));
        loadFileURIButton->setMaximumSize(QSize(400, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        loadFileURIButton->setFont(font);
        loadFileURIButton->setCursor(QCursor(Qt::PointingHandCursor));
        loadFileURIButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"font: 10pt \"Segoe UI Emoji\";\n"
"background: white;"));

        horizontalLayout_4->addWidget(loadFileURIButton);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 2, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(5, -1, 0, -1);
        loadFilePic = new QLabel(frame);
        loadFilePic->setObjectName(QString::fromUtf8("loadFilePic"));
        loadFilePic->setEnabled(true);
        sizePolicy1.setHeightForWidth(loadFilePic->sizePolicy().hasHeightForWidth());
        loadFilePic->setSizePolicy(sizePolicy1);
        loadFilePic->setMinimumSize(QSize(30, 30));
        loadFilePic->setMaximumSize(QSize(50, 50));
        loadFilePic->setLineWidth(0);
        loadFilePic->setMidLineWidth(0);
        loadFilePic->setPixmap(QPixmap(QString::fromUtf8("images/open.png")));
        loadFilePic->setScaledContents(true);
        loadFilePic->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(loadFilePic);

        loadFileButton = new QPushButton(frame);
        loadFileButton->setObjectName(QString::fromUtf8("loadFileButton"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loadFileButton->sizePolicy().hasHeightForWidth());
        loadFileButton->setSizePolicy(sizePolicy2);
        loadFileButton->setMinimumSize(QSize(200, 50));
        loadFileButton->setMaximumSize(QSize(300, 40));
        loadFileButton->setFont(font);
        loadFileButton->setCursor(QCursor(Qt::PointingHandCursor));
        loadFileButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"font: 10pt \"Segoe UI Emoji\";\n"
"background: white;"));

        horizontalLayout_2->addWidget(loadFileButton, 0, Qt::AlignVCenter);


        gridLayout_2->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label1 = new QLabel(frame);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setMaximumSize(QSize(400, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(53, 53, 53, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label1->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label1->setFont(font1);
        label1->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI Emoji\";\n"
""));
        label1->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label1, 0, Qt::AlignHCenter);

        loadDesc = new QLabel(frame);
        loadDesc->setObjectName(QString::fromUtf8("loadDesc"));
        sizePolicy1.setHeightForWidth(loadDesc->sizePolicy().hasHeightForWidth());
        loadDesc->setSizePolicy(sizePolicy1);
        loadDesc->setMinimumSize(QSize(40, 10));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        loadDesc->setPalette(palette1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        loadDesc->setFont(font2);
        loadDesc->setStyleSheet(QString::fromUtf8("font: 13pt \"Segoe UI Emoji\";"));
        loadDesc->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(loadDesc, 0, Qt::AlignHCenter);

        fileList = new QTableView(frame);
        fileList->setObjectName(QString::fromUtf8("fileList"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(fileList->sizePolicy().hasHeightForWidth());
        fileList->setSizePolicy(sizePolicy3);
        fileList->setMaximumSize(QSize(500, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush3(QColor(206, 211, 217, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        fileList->setPalette(palette2);
        QFont font3;
        font3.setPointSize(12);
        font3.setItalic(true);
        fileList->setFont(font3);
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


        gridLayout_2->addLayout(verticalLayout, 1, 0, 3, 1);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy4);
        line_2->setMinimumSize(QSize(0, 0));
        line_2->setStyleSheet(QString::fromUtf8("background: white;"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 3, 2, 1, 3);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy5);
        line->setMinimumSize(QSize(1, 0));
        line->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 1, 4, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        newFilePic = new QLabel(frame);
        newFilePic->setObjectName(QString::fromUtf8("newFilePic"));
        newFilePic->setEnabled(true);
        sizePolicy1.setHeightForWidth(newFilePic->sizePolicy().hasHeightForWidth());
        newFilePic->setSizePolicy(sizePolicy1);
        newFilePic->setMinimumSize(QSize(30, 30));
        newFilePic->setMaximumSize(QSize(50, 50));
        newFilePic->setSizeIncrement(QSize(0, 0));
        newFilePic->setPixmap(QPixmap(QString::fromUtf8("images/new.png")));
        newFilePic->setScaledContents(true);
        newFilePic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(newFilePic, 0, Qt::AlignVCenter);

        newFileButton = new QPushButton(frame);
        newFileButton->setObjectName(QString::fromUtf8("newFileButton"));
        sizePolicy1.setHeightForWidth(newFileButton->sizePolicy().hasHeightForWidth());
        newFileButton->setSizePolicy(sizePolicy1);
        newFileButton->setMinimumSize(QSize(200, 50));
        newFileButton->setMaximumSize(QSize(400, 50));
        newFileButton->setFont(font);
        newFileButton->setCursor(QCursor(Qt::PointingHandCursor));
        newFileButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"font: 10pt \"Segoe UI Emoji\";\n"
"background: white;"));
        newFileButton->setFlat(false);

        horizontalLayout_3->addWidget(newFileButton);


        gridLayout_2->addLayout(horizontalLayout_3, 4, 2, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label1_2 = new QLabel(frame);
        label1_2->setObjectName(QString::fromUtf8("label1_2"));
        sizePolicy1.setHeightForWidth(label1_2->sizePolicy().hasHeightForWidth());
        label1_2->setSizePolicy(sizePolicy1);
        label1_2->setMinimumSize(QSize(300, 0));
        label1_2->setMaximumSize(QSize(300, 16777215));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label1_2->setPalette(palette3);
        label1_2->setFont(font1);
        label1_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI Emoji\";\n"
""));
        label1_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(label1_2, 0, Qt::AlignHCenter);

        loadDesc_2 = new QLabel(frame);
        loadDesc_2->setObjectName(QString::fromUtf8("loadDesc_2"));
        sizePolicy1.setHeightForWidth(loadDesc_2->sizePolicy().hasHeightForWidth());
        loadDesc_2->setSizePolicy(sizePolicy1);
        loadDesc_2->setMinimumSize(QSize(300, 60));
        loadDesc_2->setMaximumSize(QSize(300, 16777215));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        loadDesc_2->setPalette(palette4);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        loadDesc_2->setFont(font4);
        loadDesc_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI Emoji\";\n"
""));
        loadDesc_2->setScaledContents(false);
        loadDesc_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(loadDesc_2, 0, Qt::AlignHCenter);

        URILineEdit = new QLineEdit(frame);
        URILineEdit->setObjectName(QString::fromUtf8("URILineEdit"));
        URILineEdit->setEnabled(true);
        sizePolicy1.setHeightForWidth(URILineEdit->sizePolicy().hasHeightForWidth());
        URILineEdit->setSizePolicy(sizePolicy1);
        URILineEdit->setMinimumSize(QSize(400, 50));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        URILineEdit->setPalette(palette5);
        URILineEdit->setFont(font);
        URILineEdit->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"font: 10pt \"Segoe UI Emoji\";\n"
"background: white;"));

        verticalLayout_2->addWidget(URILineEdit, 0, Qt::AlignHCenter);

        errorDescription = new QLabel(frame);
        errorDescription->setObjectName(QString::fromUtf8("errorDescription"));
        errorDescription->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(errorDescription->sizePolicy().hasHeightForWidth());
        errorDescription->setSizePolicy(sizePolicy6);
        QPalette palette6;
        QBrush brush4(QColor(170, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush5(QColor(255, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush5);
        QBrush brush6(QColor(212, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush7(QColor(85, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush7);
        QBrush brush8(QColor(113, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        QBrush brush9(QColor(0, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush9);
        QBrush brush10(QColor(212, 127, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush11(QColor(255, 255, 220, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush9);
        QBrush brush12(QColor(85, 255, 255, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush9);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush9);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        errorDescription->setPalette(palette6);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setItalic(true);
        font5.setWeight(75);
        errorDescription->setFont(font5);
        errorDescription->setStyleSheet(QString::fromUtf8(""));
        errorDescription->setFrameShape(QFrame::NoFrame);
        errorDescription->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(errorDescription);


        gridLayout_2->addLayout(verticalLayout_2, 1, 2, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(5, -1, 0, -1);
        myuserText = new QLabel(frame);
        myuserText->setObjectName(QString::fromUtf8("myuserText"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        myuserText->setPalette(palette7);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font6.setPointSize(20);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        font6.setKerning(true);
        myuserText->setFont(font6);
        myuserText->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI Emoji\";\n"
""));
        myuserText->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(myuserText, 0, Qt::AlignHCenter);

        myimage = new QLabel(frame);
        myimage->setObjectName(QString::fromUtf8("myimage"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(3);
        sizePolicy7.setVerticalStretch(3);
        sizePolicy7.setHeightForWidth(myimage->sizePolicy().hasHeightForWidth());
        myimage->setSizePolicy(sizePolicy7);
        myimage->setMinimumSize(QSize(200, 200));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        myimage->setPalette(palette8);
        QFont font7;
        font7.setPointSize(14);
        font7.setBold(true);
        font7.setWeight(75);
        myimage->setFont(font7);
        myimage->setScaledContents(true);
        myimage->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(myimage, 0, Qt::AlignHCenter);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 4);


        gridLayout->addWidget(frame, 1, 0, 1, 1);


        retranslateUi(FileExplorerWindow);

        newFileButton->setDefault(false);


        QMetaObject::connectSlotsByName(FileExplorerWindow);
    } // setupUi

    void retranslateUi(QWidget *FileExplorerWindow)
    {
        FileExplorerWindow->setWindowTitle(QCoreApplication::translate("FileExplorerWindow", "Files", nullptr));
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
        myuserText->setText(QString());
        myimage->setText(QCoreApplication::translate("FileExplorerWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileExplorerWindow: public Ui_FileExplorerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEXPLORERWINDOW_H
