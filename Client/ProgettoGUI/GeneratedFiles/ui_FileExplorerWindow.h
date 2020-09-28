/********************************************************************************
** Form generated from reading UI file 'FileExplorerWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEEXPLORERWINDOW_H
#define UI_FILEEXPLORERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label1;
    QLabel *loadDesc;
    QTableView *fileList;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *newFilePic;
    QPushButton *newFileButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *loadFilePic;
    QPushButton *loadFileButton;
    QWidget *horizontalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *myuserText;
    QLabel *myimage;
    QFrame *line;
    QFrame *line_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label1_2;
    QLabel *loadDesc_2;
    QLineEdit *URILineEdit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *loadFilePic_2;
    QPushButton *loadFileURIButton;
    QLabel *errorDescription;

    void setupUi(QWidget *FileExplorerWindow)
    {
        if (FileExplorerWindow->objectName().isEmpty())
            FileExplorerWindow->setObjectName(QString::fromUtf8("FileExplorerWindow"));
        FileExplorerWindow->resize(856, 633);
        FileExplorerWindow->setAutoFillBackground(false);
        verticalLayoutWidget = new QWidget(FileExplorerWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 160, 351, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(verticalLayoutWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label1->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label1->setFont(font);
        label1->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label1);

        loadDesc = new QLabel(verticalLayoutWidget);
        loadDesc->setObjectName(QString::fromUtf8("loadDesc"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        loadDesc->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setBold(true);
        font1.setWeight(75);
        loadDesc->setFont(font1);
        loadDesc->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(loadDesc);

        fileList = new QTableView(verticalLayoutWidget);
        fileList->setObjectName(QString::fromUtf8("fileList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileList->sizePolicy().hasHeightForWidth());
        fileList->setSizePolicy(sizePolicy);
        QPalette palette2;
        QBrush brush2(QColor(206, 211, 217, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(193, 198, 200, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        QBrush brush4(QColor(240, 240, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        fileList->setPalette(palette2);
        QFont font2;
        font2.setPointSize(12);
        font2.setItalic(true);
        fileList->setFont(font2);
        fileList->setContextMenuPolicy(Qt::DefaultContextMenu);
        fileList->setFrameShape(QFrame::Box);
        fileList->setFrameShadow(QFrame::Raised);
        fileList->setTabKeyNavigation(false);
        fileList->setDragEnabled(false);
        fileList->setShowGrid(false);
        fileList->horizontalHeader()->setVisible(false);
        fileList->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(fileList);

        horizontalLayoutWidget = new QWidget(FileExplorerWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(490, 500, 301, 101));
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
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(newFileButton->sizePolicy().hasHeightForWidth());
        newFileButton->setSizePolicy(sizePolicy1);
        newFileButton->setMaximumSize(QSize(16777215, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        newFileButton->setFont(font3);

        horizontalLayout->addWidget(newFileButton);

        horizontalLayoutWidget_2 = new QWidget(FileExplorerWindow);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(50, 500, 301, 101));
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
        sizePolicy1.setHeightForWidth(loadFileButton->sizePolicy().hasHeightForWidth());
        loadFileButton->setSizePolicy(sizePolicy1);
        loadFileButton->setMaximumSize(QSize(16777215, 50));
        loadFileButton->setFont(font3);

        horizontalLayout_2->addWidget(loadFileButton);

        horizontalLayoutWidget_3 = new QWidget(FileExplorerWindow);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(330, 10, 191, 121));
        verticalLayout_3 = new QVBoxLayout(horizontalLayoutWidget_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(5, 0, 0, 0);
        myuserText = new QLabel(horizontalLayoutWidget_3);
        myuserText->setObjectName(QString::fromUtf8("myuserText"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        myuserText->setPalette(palette3);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI Semilight"));
        font4.setPointSize(12);
        font4.setItalic(true);
        font4.setKerning(true);
        myuserText->setFont(font4);
        myuserText->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(myuserText);

        myimage = new QLabel(horizontalLayoutWidget_3);
        myimage->setObjectName(QString::fromUtf8("myimage"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        myimage->setPalette(palette4);
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        myimage->setFont(font5);
        myimage->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(myimage);

        verticalLayout_3->setStretch(0, 2);
        line = new QFrame(FileExplorerWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(410, 160, 31, 421));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(FileExplorerWindow);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(440, 450, 401, 31));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_2 = new QWidget(FileExplorerWindow);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(460, 160, 351, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label1_2 = new QLabel(verticalLayoutWidget_2);
        label1_2->setObjectName(QString::fromUtf8("label1_2"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label1_2->setPalette(palette5);
        label1_2->setFont(font);
        label1_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(label1_2);

        loadDesc_2 = new QLabel(verticalLayoutWidget_2);
        loadDesc_2->setObjectName(QString::fromUtf8("loadDesc_2"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        loadDesc_2->setPalette(palette6);
        loadDesc_2->setFont(font1);
        loadDesc_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(loadDesc_2);

        URILineEdit = new QLineEdit(verticalLayoutWidget_2);
        URILineEdit->setObjectName(QString::fromUtf8("URILineEdit"));
        URILineEdit->setEnabled(true);
        sizePolicy.setHeightForWidth(URILineEdit->sizePolicy().hasHeightForWidth());
        URILineEdit->setSizePolicy(sizePolicy);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        URILineEdit->setPalette(palette7);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Segoe UI"));
        font6.setPointSize(11);
        font6.setItalic(false);
        URILineEdit->setFont(font6);

        verticalLayout_2->addWidget(URILineEdit);

        horizontalLayoutWidget_4 = new QWidget(FileExplorerWindow);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(490, 300, 301, 101));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(5, 0, 20, 0);
        loadFilePic_2 = new QLabel(horizontalLayoutWidget_4);
        loadFilePic_2->setObjectName(QString::fromUtf8("loadFilePic_2"));
        loadFilePic_2->setEnabled(true);
        loadFilePic_2->setPixmap(QPixmap(QString::fromUtf8("images/uri.png")));
        loadFilePic_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(loadFilePic_2);

        loadFileURIButton = new QPushButton(horizontalLayoutWidget_4);
        loadFileURIButton->setObjectName(QString::fromUtf8("loadFileURIButton"));
        sizePolicy1.setHeightForWidth(loadFileURIButton->sizePolicy().hasHeightForWidth());
        loadFileURIButton->setSizePolicy(sizePolicy1);
        loadFileURIButton->setMaximumSize(QSize(16777215, 50));
        loadFileURIButton->setFont(font3);

        horizontalLayout_4->addWidget(loadFileURIButton);

        errorDescription = new QLabel(FileExplorerWindow);
        errorDescription->setObjectName(QString::fromUtf8("errorDescription"));
        errorDescription->setEnabled(true);
        errorDescription->setGeometry(QRect(500, 360, 281, 20));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(errorDescription->sizePolicy().hasHeightForWidth());
        errorDescription->setSizePolicy(sizePolicy2);
        QPalette palette8;
        QBrush brush5(QColor(170, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush5);
        QBrush brush6(QColor(255, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush7(QColor(212, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(85, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(113, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        QBrush brush10(QColor(0, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush10);
        QBrush brush11(QColor(212, 127, 127, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        QBrush brush12(QColor(255, 255, 220, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
        QBrush brush13(QColor(85, 255, 255, 128));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        errorDescription->setPalette(palette8);
        QFont font7;
        font7.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setItalic(true);
        font7.setWeight(75);
        errorDescription->setFont(font7);
        errorDescription->setFrameShape(QFrame::NoFrame);
        errorDescription->setAlignment(Qt::AlignCenter);

        retranslateUi(FileExplorerWindow);

        QMetaObject::connectSlotsByName(FileExplorerWindow);
    } // setupUi

    void retranslateUi(QWidget *FileExplorerWindow)
    {
        FileExplorerWindow->setWindowTitle(QCoreApplication::translate("FileExplorerWindow", "Files", nullptr));
        label1->setText(QCoreApplication::translate("FileExplorerWindow", "Your Files", nullptr));
        loadDesc->setText(QCoreApplication::translate("FileExplorerWindow", "Select a file, then press Load file", nullptr));
        newFilePic->setText(QString());
        newFileButton->setText(QCoreApplication::translate("FileExplorerWindow", "New File", nullptr));
        loadFilePic->setText(QString());
        loadFileButton->setText(QCoreApplication::translate("FileExplorerWindow", "Load from List", nullptr));
        myuserText->setText(QString());
        myimage->setText(QCoreApplication::translate("FileExplorerWindow", "TextLabel", nullptr));
        label1_2->setText(QCoreApplication::translate("FileExplorerWindow", "Load from URI", nullptr));
        loadDesc_2->setText(QCoreApplication::translate("FileExplorerWindow", "Paste an URI, then press Load File", nullptr));
#if QT_CONFIG(accessibility)
        URILineEdit->setAccessibleDescription(QCoreApplication::translate("FileExplorerWindow", "Your URI", nullptr));
#endif // QT_CONFIG(accessibility)
        URILineEdit->setPlaceholderText(QCoreApplication::translate("FileExplorerWindow", "Paste your URI here", nullptr));
        loadFilePic_2->setText(QString());
        loadFileURIButton->setText(QCoreApplication::translate("FileExplorerWindow", "Load from URI", nullptr));
        errorDescription->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FileExplorerWindow: public Ui_FileExplorerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEXPLORERWINDOW_H
