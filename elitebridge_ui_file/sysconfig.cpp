#include "sysconfig.h"
#include "ui_sysconfig.h"

SysConfig::SysConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SysConfig)
{
    ui->setupUi(this);
}

SysConfig::~SysConfig()
{
    delete ui;
}
