/********************************************************************************
** Form generated from reading UI file 'edi.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDI_H
#define UI_EDI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EDI
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *EDI)
    {
        if (EDI->objectName().isEmpty())
            EDI->setObjectName(QString::fromUtf8("EDI"));
        EDI->resize(400, 300);
        verticalLayout = new QVBoxLayout(EDI);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_6 = new QPushButton(EDI);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        pushButton_6->setFont(font);

        verticalLayout->addWidget(pushButton_6);

        pushButton_2 = new QPushButton(EDI);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(EDI);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(EDI);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(EDI);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(EDI);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font);

        verticalLayout->addWidget(pushButton_5);


        retranslateUi(EDI);

        QMetaObject::connectSlotsByName(EDI);
    } // setupUi

    void retranslateUi(QWidget *EDI)
    {
        EDI->setWindowTitle(QCoreApplication::translate("EDI", "Form", nullptr));
        pushButton_6->setText(QCoreApplication::translate("EDI", "Transmit Order", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EDI", "Receive Items", nullptr));
        pushButton_3->setText(QCoreApplication::translate("EDI", "Transmission Setting", nullptr));
        pushButton->setText(QCoreApplication::translate("EDI", "Print Open Orders", nullptr));
        pushButton_4->setText(QCoreApplication::translate("EDI", "View Item Orders", nullptr));
        pushButton_5->setText(QCoreApplication::translate("EDI", "View Past Receipts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EDI: public Ui_EDI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDI_H
