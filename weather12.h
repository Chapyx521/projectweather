#ifndef WEATHER12_H
#define WEATHER12_H

#include <QDialog>

namespace Ui {
class weather12;
}

class weather12 : public QDialog
{
    Q_OBJECT

public:
    explicit weather12(QWidget *parent = nullptr);
    ~weather12();

private:
    Ui::weather12 *ui;
};

#endif // WEATHER12_H
