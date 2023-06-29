/********************************************************************************
** Form generated from reading UI file 'reporting.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTING_H
#define UI_REPORTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reporting
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Reporting)
    {
        if (Reporting->objectName().isEmpty())
            Reporting->setObjectName(QString::fromUtf8("Reporting"));
        Reporting->resize(400, 300);
        horizontalLayout = new QHBoxLayout(Reporting);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_2 = new QPushButton(Reporting);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font;
        font.setPointSize(15);
        pushButton_2->setFont(font);

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(Reporting);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Reporting);

        QMetaObject::connectSlotsByName(Reporting);
    } // setupUi

    void retranslateUi(QWidget *Reporting)
    {
        Reporting->setWindowTitle(QCoreApplication::translate("Reporting", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Reporting", "Start Reporting", nullptr));
        pushButton->setText(QCoreApplication::translate("Reporting", "Start Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reporting: public Ui_Reporting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTING_H
