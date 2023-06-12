/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *line_4;
    QFrame *line_2;
    QFrame *line_3;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QGridLayout *gridLayout;
    QFrame *line_11;
    QLabel *label;
    QFrame *line_6;
    QLabel *label_2;
    QLabel *label_8;
    QFrame *line_8;
    QFrame *line_10;
    QLabel *label_5;
    QFrame *line_7;
    QFrame *line_5;
    QLabel *label_4;
    QFrame *line_9;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QFrame *line_12;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuRecord;
    QMenu *menuAudit;
    QMenu *menuLocation;
    QMenu *menuUser;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *userWindow)
    {
        if (userWindow->objectName().isEmpty())
            userWindow->setObjectName("userWindow");
        userWindow->resize(838, 393);
        userWindow->setStyleSheet(QString::fromUtf8("background-color:white;"));
        centralwidget = new QWidget(userWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 0, 1, 1, 1);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 1, 0, 1, 1);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        line_11 = new QFrame(centralwidget);
        line_11->setObjectName("line_11");
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_11, 0, 9, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8("../build-insideui-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/user.png")));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line_6 = new QFrame(centralwidget);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 0, 13, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8("../build-insideui-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/Note.png")));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setPixmap(QPixmap(QString::fromUtf8("../build-insideui-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/Pop.png")));

        gridLayout->addWidget(label_8, 0, 16, 1, 1);

        line_8 = new QFrame(centralwidget);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 0, 3, 1, 1);

        line_10 = new QFrame(centralwidget);
        line_10->setObjectName("line_10");
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_10, 0, 7, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setPixmap(QPixmap(QString::fromUtf8("../build-insideui-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/undo.png")));

        gridLayout->addWidget(label_5, 0, 8, 1, 1);

        line_7 = new QFrame(centralwidget);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 0, 1, 1, 1);

        line_5 = new QFrame(centralwidget);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 0, 11, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8("../build-insideui-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/save.png")));

        gridLayout->addWidget(label_4, 0, 6, 1, 1);

        line_9 = new QFrame(centralwidget);
        line_9->setObjectName("line_9");
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_9, 0, 5, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setPixmap(QPixmap(QString::fromUtf8("../build-insideui-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/pan.png")));

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setPixmap(QPixmap(QString::fromUtf8("../build-insideui-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/db.png")));

        gridLayout->addWidget(label_6, 0, 10, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 12, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setPixmap(QPixmap(QString::fromUtf8("../build-insideui-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/img/search.png")));

        gridLayout->addWidget(label_7, 0, 14, 1, 1);

        line_12 = new QFrame(centralwidget);
        line_12->setObjectName("line_12");
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_12, 0, 15, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        userWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(userWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 838, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuRecord = new QMenu(menubar);
        menuRecord->setObjectName("menuRecord");
        menuAudit = new QMenu(menubar);
        menuAudit->setObjectName("menuAudit");
        menuLocation = new QMenu(menubar);
        menuLocation->setObjectName("menuLocation");
        menuUser = new QMenu(menubar);
        menuUser->setObjectName("menuUser");
        userWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(userWindow);
        statusbar->setObjectName("statusbar");
        userWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuRecord->menuAction());
        menubar->addAction(menuAudit->menuAction());
        menubar->addAction(menuLocation->menuAction());
        menubar->addAction(menuUser->menuAction());

        retranslateUi(userWindow);

        QMetaObject::connectSlotsByName(userWindow);
    } // setupUi

    void retranslateUi(QMainWindow *userWindow)
    {
        userWindow->setWindowTitle(QCoreApplication::translate("userWindow", "userWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_8->setText(QString());
        label_5->setText(QString());
        label_4->setText(QString());
        label_3->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("userWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("userWindow", "View", nullptr));
        menuRecord->setTitle(QCoreApplication::translate("userWindow", "Record", nullptr));
        menuAudit->setTitle(QCoreApplication::translate("userWindow", "Audit", nullptr));
        menuLocation->setTitle(QCoreApplication::translate("userWindow", "Location ", nullptr));
        menuUser->setTitle(QCoreApplication::translate("userWindow", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userWindow: public Ui_userWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
