/********************************************************************************
** Form generated from reading UI file 'FileExplorerWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEEXPLORERWINDOW_H
#define UI_FILEEXPLORERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileExplorerWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label1;
    QListView *fileList;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *newFilePic;
    QPushButton *newFileButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *loadFilePic;
    QPushButton *loadFileButton;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *myimage;
    QLabel *myuserText;

    void setupUi(QWidget *FileExplorerWindow)
    {
        if (FileExplorerWindow->objectName().isEmpty())
            FileExplorerWindow->setObjectName(QString::fromUtf8("FileExplorerWindow"));
        FileExplorerWindow->resize(868, 592);
        verticalLayoutWidget = new QWidget(FileExplorerWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 50, 351, 461));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(verticalLayoutWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Light"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label1->setFont(font);
        label1->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label1);

        fileList = new QListView(verticalLayoutWidget);
        fileList->setObjectName(QString::fromUtf8("fileList"));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        fileList->setFont(font1);
        fileList->setContextMenuPolicy(Qt::DefaultContextMenu);
        fileList->setFrameShape(QFrame::Box);
        fileList->setFrameShadow(QFrame::Raised);
        fileList->setTabKeyNavigation(false);
        fileList->setDragEnabled(false);

        verticalLayout->addWidget(fileList);

        horizontalLayoutWidget = new QWidget(FileExplorerWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(470, 210, 301, 101));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(5, 0, 20, 0);
        newFilePic = new QLabel(horizontalLayoutWidget);
        newFilePic->setObjectName(QString::fromUtf8("newFilePic"));
        newFilePic->setEnabled(true);
        newFilePic->setPixmap(QPixmap(QString::fromUtf8("images/new.png")));
        newFilePic->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(newFilePic);

        newFileButton = new QPushButton(horizontalLayoutWidget);
        newFileButton->setObjectName(QString::fromUtf8("newFileButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(newFileButton->sizePolicy().hasHeightForWidth());
        newFileButton->setSizePolicy(sizePolicy);
        newFileButton->setMaximumSize(QSize(16777215, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        newFileButton->setFont(font2);

        horizontalLayout->addWidget(newFileButton);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 3);
        horizontalLayoutWidget_2 = new QWidget(FileExplorerWindow);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(470, 320, 301, 101));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(5, 0, 20, 0);
        loadFilePic = new QLabel(horizontalLayoutWidget_2);
        loadFilePic->setObjectName(QString::fromUtf8("loadFilePic"));
        loadFilePic->setEnabled(true);
        loadFilePic->setPixmap(QPixmap(QString::fromUtf8("images/open.png")));
        loadFilePic->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(loadFilePic);

        loadFileButton = new QPushButton(horizontalLayoutWidget_2);
        loadFileButton->setObjectName(QString::fromUtf8("loadFileButton"));
        sizePolicy.setHeightForWidth(loadFileButton->sizePolicy().hasHeightForWidth());
        loadFileButton->setSizePolicy(sizePolicy);
        loadFileButton->setMaximumSize(QSize(16777215, 50));
        loadFileButton->setFont(font2);

        horizontalLayout_2->addWidget(loadFileButton);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 3);
        horizontalLayoutWidget_3 = new QWidget(FileExplorerWindow);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(500, 50, 251, 91));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_3->setContentsMargins(5, 0, 0, 0);
        myimage = new QLabel(horizontalLayoutWidget_3);
        myimage->setObjectName(QString::fromUtf8("myimage"));

        horizontalLayout_3->addWidget(myimage);

        myuserText = new QLabel(horizontalLayoutWidget_3);
        myuserText->setObjectName(QString::fromUtf8("myuserText"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI Semilight"));
        font3.setPointSize(12);
        font3.setItalic(true);
        font3.setKerning(true);
        myuserText->setFont(font3);
        myuserText->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(myuserText);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 3);

        retranslateUi(FileExplorerWindow);

        QMetaObject::connectSlotsByName(FileExplorerWindow);
    } // setupUi

    void retranslateUi(QWidget *FileExplorerWindow)
    {
        FileExplorerWindow->setWindowTitle(QApplication::translate("FileExplorerWindow", "Files", nullptr));
        label1->setText(QApplication::translate("FileExplorerWindow", "Recently used files", nullptr));
        newFilePic->setText(QString());
        newFileButton->setText(QApplication::translate("FileExplorerWindow", "New file", nullptr));
        loadFilePic->setText(QString());
        loadFileButton->setText(QApplication::translate("FileExplorerWindow", "Load file", nullptr));
        myimage->setText(QApplication::translate("FileExplorerWindow", "TextLabel", nullptr));
        myuserText->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FileExplorerWindow: public Ui_FileExplorerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEXPLORERWINDOW_H
