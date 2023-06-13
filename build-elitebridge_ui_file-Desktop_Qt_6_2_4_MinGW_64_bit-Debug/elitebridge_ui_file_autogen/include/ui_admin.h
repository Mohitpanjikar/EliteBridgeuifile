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
#include <QtWidgets/QHBoxLayout>
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
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *_2;
    QPushButton *btn_EDI;
    QLabel *label_6;
    QPushButton *btn_sysConfig;
    QPushButton *btn_process;
    QLabel *label_10;
    QPushButton *btn_reporting;
    QLabel *label_3;
    QLabel *label_9;
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
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setFrameShadow(QFrame::Sunken);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        comboBox->setFont(font2);
        comboBox->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));

        verticalLayout->addWidget(comboBox);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        _2 = new QGridLayout();
        _2->setObjectName(QString::fromUtf8("gridLayout"));
        btn_EDI = new QPushButton(centralwidget);
        btn_EDI->setObjectName(QString::fromUtf8("btn_EDI"));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        btn_EDI->setFont(font3);
        btn_EDI->setStyleSheet(QString::fromUtf8("border: 4px solid black;"));
        
        _2->addWidget(btn_EDI, 2, 2, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dell/OneDrive/Pictures/Screenshots/ide.png")));
        
        _2->addWidget(label_6, 2, 0, 1, 2);

        btn_sysConfig = new QPushButton(centralwidget);
        btn_sysConfig->setObjectName(QString::fromUtf8("btn_sysConfig"));
        btn_sysConfig->setFont(font3);
        btn_sysConfig->setStyleSheet(QString::fromUtf8("border: 4px solid black;"));
        
        _2->addWidget(btn_sysConfig, 3, 2, 1, 1);

        btn_process = new QPushButton(centralwidget);
        btn_process->setObjectName(QString::fromUtf8("btn_process"));
        btn_process->setFont(font3);
        btn_process->setStyleSheet(QString::fromUtf8("border: 4px solid black;"));
        
        _2->addWidget(btn_process, 4, 2, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dell/OneDrive/Pictures/Screenshots/process.png")));
        
        _2->addWidget(label_10, 4, 0, 1, 2);

        btn_reporting = new QPushButton(centralwidget);
        btn_reporting->setObjectName(QString::fromUtf8("btn_reporting"));
        btn_reporting->setFont(font3);
        btn_reporting->setStyleSheet(QString::fromUtf8("border: 4px solid black;"));
        
        _2->addWidget(btn_reporting, 0, 2, 2, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dell/OneDrive/Pictures/Screenshots/Screenshot 2023-06-10 121132.png")));
        
        _2->addWidget(label_3, 0, 0, 2, 2);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dell/OneDrive/Pictures/Screenshots/systemconfig.png")));
        
        _2->addWidget(label_9, 3, 0, 1, 2);
        
        
        horizontalLayout->addLayout(_2);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("border: 2px solid black;"));

        horizontalLayout->addWidget(tabWidget);


        verticalLayout_2->addLayout(horizontalLayout);

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
        btn_EDI->setText(QCoreApplication::translate("Admin", "EDI", nullptr));
        label_6->setText(QString());
        btn_sysConfig->setText(QCoreApplication::translate("Admin", "system configuration", nullptr));
        btn_process->setText(QCoreApplication::translate("Admin", "Process", nullptr));
        label_10->setText(QString());
        btn_reporting->setText(QCoreApplication::translate("Admin", "Reporting", nullptr));
        label_3->setText(QString());
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
