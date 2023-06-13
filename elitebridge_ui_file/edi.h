#ifndef EDI_H
#define EDI_H

#include <QWidget>

namespace Ui {
class EDI;
}

class EDI : public QWidget
{
    Q_OBJECT

public:
    explicit EDI(QWidget *parent = nullptr);
    ~EDI();

private:
    Ui::EDI *ui;
};

#endif // EDI_H
