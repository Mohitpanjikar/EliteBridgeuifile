#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    QLabel* reporting=ui->reporting;


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
