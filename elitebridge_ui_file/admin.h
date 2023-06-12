#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QLabel>
#include <QWidget>
#include <Qt>
namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT



public:
    explicit Admin(QWidget *parent = nullptr);
     void labelClicked();
    ~Admin();

private:
    Ui::Admin *ui;
};

#endif // ADMIN_H
