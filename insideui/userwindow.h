#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class userWindow; }
QT_END_NAMESPACE

class userWindow : public QMainWindow
{
    Q_OBJECT

public:
    userWindow(QWidget *parent = nullptr);
    ~userWindow();

private:
    Ui::userWindow *ui;
};
#endif // USERWINDOW_H
