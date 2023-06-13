#include "admin.h"
#include "ui_admin.h"
#include "registrationtab.h"

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);


}
void Admin::addReporting(){
    this->close();
}
void Admin::mousePressEvent(QMouseEvent* event) {
    emit clicked();
}


Admin::~Admin()
{
    delete ui;
}



void Admin::on_btn_reporting_clicked()
{
    RegistrationTab* registration_tab=new RegistrationTab;

    ui->tabWidget->clear();
    ui->tabWidget->addTab(registration_tab,"registration");
}

