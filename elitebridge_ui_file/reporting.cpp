#include "reporting.h"
#include "ui_reporting.h"

Reporting::Reporting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reporting)
{
    ui->setupUi(this);
}

Reporting::~Reporting()
{
    delete ui;
}
