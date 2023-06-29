#include "edi.h"
#include "ui_edi.h"

EDI::EDI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EDI)
{
    ui->setupUi(this);
}

EDI::~EDI()
{
    delete ui;
}
