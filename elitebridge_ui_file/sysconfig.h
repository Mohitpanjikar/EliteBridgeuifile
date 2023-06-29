#ifndef SYSCONFIG_H
#define SYSCONFIG_H

#include <QWidget>

namespace Ui {
class SysConfig;
}

class SysConfig : public QWidget
{
    Q_OBJECT

public:
    explicit SysConfig(QWidget *parent = nullptr);
    ~SysConfig();

private:
    Ui::SysConfig *ui;
};

#endif // SYSCONFIG_H
