#ifndef WEATHER8_H
#define WEATHER8_H

#include <QDialog>

namespace Ui {
class weather8;
}

class weather8 : public QDialog
{
    Q_OBJECT

public:
    explicit weather8(QWidget *parent = nullptr);
    ~weather8();

private:
    Ui::weather8 *ui;
};

#endif // WEATHER8_H
