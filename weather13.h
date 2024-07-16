#ifndef WEATHER13_H
#define WEATHER13_H

#include <QDialog>

namespace Ui {
class weather13;
}

class weather13 : public QDialog
{
    Q_OBJECT

public:
    explicit weather13(QWidget *parent = nullptr);
    ~weather13();

private:
    Ui::weather13 *ui;
};

#endif // WEATHER13_H
