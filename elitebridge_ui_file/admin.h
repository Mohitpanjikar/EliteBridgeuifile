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

signals:
    void clicked();

public:
    explicit Admin(QWidget *parent = nullptr);
    void addReporting();
    void mousePressEvent(QMouseEvent* event);
    ~Admin();

private slots:
    void on_btn_reporting_clicked();

private:
    Ui::Admin *ui;
};

#endif // ADMIN_H
