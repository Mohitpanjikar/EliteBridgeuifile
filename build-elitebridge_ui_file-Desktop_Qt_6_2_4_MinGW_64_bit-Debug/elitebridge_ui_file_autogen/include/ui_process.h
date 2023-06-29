/********************************************************************************
** Form generated from reading UI file 'process.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESS_H
#define UI_PROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Process
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Process)
    {
        if (Process->objectName().isEmpty())
            Process->setObjectName(QString::fromUtf8("Process"));
        Process->resize(640, 480);
        verticalLayout = new QVBoxLayout(Process);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_4 = new QPushButton(Process);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        pushButton_4->setFont(font);

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(Process);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(Process);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        pushButton_5 = new QPushButton(Process);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font);

        verticalLayout->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(Process);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Process);

        QMetaObject::connectSlotsByName(Process);
    } // setupUi

    void retranslateUi(QWidget *Process)
    {
        Process->setWindowTitle(QCoreApplication::translate("Process", "Form", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Process", "Application Launch List", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Process", "Launch All Process", nullptr));
        pushButton->setText(QCoreApplication::translate("Process", "Start the User Interface", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Process", "Set Window Auto Logon", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Process", "Convert to SQL Sever", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Process: public Ui_Process {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESS_H
