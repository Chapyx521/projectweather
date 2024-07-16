#ifndef WEATHER11_H
#define WEATHER11_H

#include <QDialog>

namespace Ui {
class weather11;
}

class weather11 : public QDialog
{
    Q_OBJECT

public:
    explicit weather11(QWidget *parent = nullptr);
    ~weather11();

private:
    Ui::weather11 *ui;
};

#endif // WEATHER11_H
