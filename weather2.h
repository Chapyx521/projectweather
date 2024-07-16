#ifndef WEATHER2_H
#define WEATHER2_H

#include <QDialog>

namespace Ui {
class weather2;
}

class weather2 : public QDialog
{
    Q_OBJECT

public:
    explicit weather2(QWidget *parent = nullptr);
    ~weather2();

private:
    Ui::weather2 *ui;
};

#endif // WEATHER2_H
