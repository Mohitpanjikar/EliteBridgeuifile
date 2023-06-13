#ifndef PROCESS_H
#define PROCESS_H

#include <QWidget>

namespace Ui {
class Process;
}

class Process : public QWidget
{
    Q_OBJECT

public:
    explicit Process(QWidget *parent = nullptr);
    ~Process();

private:
    Ui::Process *ui;
};

#endif // PROCESS_H
