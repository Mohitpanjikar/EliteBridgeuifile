/********************************************************************************
** Form generated from reading UI file 'sysconfig.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSCONFIG_H
#define UI_SYSCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SysConfig
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SysConfig)
    {
        if (SysConfig->objectName().isEmpty())
            SysConfig->setObjectName(QString::fromUtf8("SysConfig"));
        SysConfig->resize(640, 480);
        verticalLayout = new QVBoxLayout(SysConfig);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_3 = new QPushButton(SysConfig);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton_3->setFont(font);

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(SysConfig);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(SysConfig);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(SysConfig);

        QMetaObject::connectSlotsByName(SysConfig);
    } // setupUi

    void retranslateUi(QWidget *SysConfig)
    {
        SysConfig->setWindowTitle(QCoreApplication::translate("SysConfig", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SysConfig", "Machine Setup", nullptr));
        pushButton->setText(QCoreApplication::translate("SysConfig", "View Open Stock Transfer", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SysConfig", "Stock Transfer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SysConfig: public Ui_SysConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSCONFIG_H
