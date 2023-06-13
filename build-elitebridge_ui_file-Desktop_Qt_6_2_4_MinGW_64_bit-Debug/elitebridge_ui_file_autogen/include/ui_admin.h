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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_9;
    QPushButton *btn_reporting;
    QPushButton *btn_EDI;
    QPushButton *btn_sysConfig;
    QPushButton *btn_process;
    QTabWidget *tabWidget;
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
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 871, 114));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        layoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        verticalLayout->addWidget(comboBox);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 125, 346, 557));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dell/OneDrive/Pictures/Screenshots/ide.png")));

        gridLayout->addWidget(label_6, 2, 0, 1, 2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dell/OneDrive/Pictures/Screenshots/Screenshot 2023-06-10 121132.png")));

        gridLayout->addWidget(label_3, 0, 0, 2, 2);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dell/OneDrive/Pictures/Screenshots/process.png")));

        gridLayout->addWidget(label_10, 4, 0, 1, 2);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dell/OneDrive/Pictures/Screenshots/systemconfig.png")));

        gridLayout->addWidget(label_9, 3, 0, 1, 2);

        btn_reporting = new QPushButton(layoutWidget1);
        btn_reporting->setObjectName(QString::fromUtf8("btn_reporting"));

        gridLayout->addWidget(btn_reporting, 0, 2, 2, 1);

        btn_EDI = new QPushButton(layoutWidget1);
        btn_EDI->setObjectName(QString::fromUtf8("btn_EDI"));

        gridLayout->addWidget(btn_EDI, 2, 2, 1, 1);

        btn_sysConfig = new QPushButton(layoutWidget1);
        btn_sysConfig->setObjectName(QString::fromUtf8("btn_sysConfig"));

        gridLayout->addWidget(btn_sysConfig, 3, 2, 1, 1);

        btn_process = new QPushButton(layoutWidget1);
        btn_process->setObjectName(QString::fromUtf8("btn_process"));

        gridLayout->addWidget(btn_process, 4, 2, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(350, 130, 521, 501));
        Admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Admin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 888, 25));
        Admin->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Admin->setStatusBar(statusbar);

        retranslateUi(Admin);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Admin", "EliteBridge Utilities", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "Select a location from the List", nullptr));
        label_6->setText(QString());
        label_3->setText(QString());
        label_10->setText(QString());
        label_9->setText(QString());
        btn_reporting->setText(QCoreApplication::translate("Admin", "Reporting", nullptr));
        btn_EDI->setText(QCoreApplication::translate("Admin", "EDI", nullptr));
        btn_sysConfig->setText(QCoreApplication::translate("Admin", "system configuration", nullptr));
        btn_process->setText(QCoreApplication::translate("Admin", "Process", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
