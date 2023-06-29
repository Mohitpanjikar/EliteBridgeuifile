#include "admin.h"
#include "ui_admin.h"
#include "reporting.h"
#include "edi.h"
#include "sysconfig.h"
#include "process.h"

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
    Reporting* Reporting_tab=new Reporting;

    ui->tabWidget->clear();
    ui->tabWidget->addTab(Reporting_tab,"Report");
}


void Admin::on_btn_EDI_clicked()
{
    EDI* EDI_tab=new EDI;

    ui->tabWidget->clear();
    ui->tabWidget->addTab(EDI_tab,"EDI");
}


void Admin::on_btn_sysConfig_clicked()
{
    SysConfig* sysConfig_tab=new SysConfig;

    ui->tabWidget->clear();
    ui->tabWidget->addTab(sysConfig_tab,"System Configure");
}


void Admin::on_btn_process_clicked()
{
    Process* Process_tab=new Process;

    ui->tabWidget->clear();
    ui->tabWidget->addTab(Process_tab,"Process");
}

