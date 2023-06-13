#ifndef REGISTRATIONTAB_H
#define REGISTRATIONTAB_H

#include <QWidget>

namespace Ui {
class RegistrationTab;
}

class RegistrationTab : public QWidget
{
    Q_OBJECT

public:
    explicit RegistrationTab(QWidget *parent = nullptr);
    ~RegistrationTab();

private:
    Ui::RegistrationTab *ui;
};

#endif // REGISTRATIONTAB_H
