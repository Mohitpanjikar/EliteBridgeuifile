#include "registrationtab.h"
#include "ui_registrationtab.h"

RegistrationTab::RegistrationTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegistrationTab)
{
    ui->setupUi(this);
}

RegistrationTab::~RegistrationTab()
{
    delete ui;
}
