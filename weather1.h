#ifndef WEATHER1_H
#define WEATHER1_H

#include <QDialog>

namespace Ui {
class weather1;
}

class weather1 : public QDialog
{
    Q_OBJECT

public:
    explicit weather1(QWidget *parent = nullptr);
    ~weather1();

private:
    Ui::weather1 *ui;
};

#endif // WEATHER1_H
