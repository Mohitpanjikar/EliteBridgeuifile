#ifndef REPORTING_H
#define REPORTING_H

#include <QWidget>

namespace Ui {
class Reporting;
}

class Reporting : public QWidget
{
    Q_OBJECT

public:
    explicit Reporting(QWidget *parent = nullptr);
    ~Reporting();

private:
    Ui::Reporting *ui;
};

#endif // REPORTING_H
