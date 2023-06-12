#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);

}
Admin::labelClicked(){
                      connect(ui->reporting,clic)
}



Admin::~Admin()
{
    delete ui;
}
