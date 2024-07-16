#ifndef WEATHER6_H
#define WEATHER6_H

#include <QDialog>

namespace Ui {
class weather6;
}

class weather6 : public QDialog
{
    Q_OBJECT

public:
    explicit weather6(QWidget *parent = nullptr);
    ~weather6();

private:
    Ui::weather6 *ui;
};

#endif // WEATHER6_H
