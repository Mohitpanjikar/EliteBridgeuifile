/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QFrame *dynamix;
    QLabel *label_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *EDI;
    QLabel *label_9;
    QLabel *systemconfig;
    QLabel *label_10;
    QLabel *process;
    QLabel *reporting;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(888, 682);
        Admin->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        dynamix = new QFrame(centralwidget);
        dynamix->setObjectName(QString::fromUtf8("dynamix"));
        dynamix->setGeometry(QRect(350, 120, 521, 491));
        dynamix->setFrameShape(QFrame::StyledPanel);
        dynamix->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(dynamix);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 60, 63, 20));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 871, 114));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        widget->setFont(font);
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        verticalLayout->addWidget(comboBox);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 125, 346, 491));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dell/OneDrive/Pictures/Screenshots/Screenshot 2023-06-10 121132.png")));

        gridLayout->addWidget(label_3, 0, 0, 2, 2);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dell/OneDrive/Pictures/Screenshots/ide.png")));

        gridLayout->addWidget(label_6, 2, 0, 1, 2);

        EDI = new QLabel(widget1);
        EDI->setObjectName(QString::fromUtf8("EDI"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        EDI->setFont(font2);
        EDI->setMouseTracking(true);

        gridLayout->addWidget(EDI, 2, 2, 1, 1);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dell/OneDrive/Pictures/Screenshots/systemconfig.png")));

        gridLayout->addWidget(label_9, 3, 0, 1, 2);

        systemconfig = new QLabel(widget1);
        systemconfig->setObjectName(QString::fromUtf8("systemconfig"));
        systemconfig->setFont(font2);
        systemconfig->setMouseTracking(true);

        gridLayout->addWidget(systemconfig, 3, 2, 1, 1);

        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dell/OneDrive/Pictures/Screenshots/process.png")));

        gridLayout->addWidget(label_10, 4, 0, 1, 2);

        process = new QLabel(widget1);
        process->setObjectName(QString::fromUtf8("process"));
        process->setFont(font2);
        process->setMouseTracking(true);

        gridLayout->addWidget(process, 4, 2, 1, 1);

        reporting = new QLabel(widget1);
        reporting->setObjectName(QString::fromUtf8("reporting"));
        reporting->setFont(font2);
        reporting->setMouseTracking(true);

        gridLayout->addWidget(reporting, 0, 2, 2, 1);

        Admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Admin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 888, 25));
        Admin->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Admin->setStatusBar(statusbar);

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "MainWindow", nullptr));
        label_5->setText(QString());
        label->setText(QCoreApplication::translate("Admin", "EliteBridge Utilities", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "Select a location from the List", nullptr));
        label_3->setText(QString());
        label_6->setText(QString());
        EDI->setText(QCoreApplication::translate("Admin", "EDI", nullptr));
        label_9->setText(QString());
        systemconfig->setText(QCoreApplication::translate("Admin", "System Configuration", nullptr));
        label_10->setText(QString());
        process->setText(QCoreApplication::translate("Admin", "Process", nullptr));
        reporting->setText(QCoreApplication::translate("Admin", "Reporting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
