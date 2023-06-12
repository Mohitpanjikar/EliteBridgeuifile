/********************************************************************************
** Form generated from reading UI file 'registrationtab.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONTAB_H
#define UI_REGISTRATIONTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationTab
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *RegistrationTab)
    {
        if (RegistrationTab->objectName().isEmpty())
            RegistrationTab->setObjectName(QString::fromUtf8("RegistrationTab"));
        RegistrationTab->resize(400, 300);
        verticalLayout = new QVBoxLayout(RegistrationTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(RegistrationTab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(RegistrationTab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(RegistrationTab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(RegistrationTab);

        QMetaObject::connectSlotsByName(RegistrationTab);
    } // setupUi

    void retranslateUi(QWidget *RegistrationTab)
    {
        RegistrationTab->setWindowTitle(QCoreApplication::translate("RegistrationTab", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("RegistrationTab", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RegistrationTab", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("RegistrationTab", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationTab: public Ui_RegistrationTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONTAB_H
