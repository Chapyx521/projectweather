#ifndef WEATHER5_H
#define WEATHER5_H

#include <QDialog>

namespace Ui {
class weather5;
}

class weather5 : public QDialog
{
    Q_OBJECT

public:
    explicit weather5(QWidget *parent = nullptr);
    ~weather5();

private:
    Ui::weather5 *ui;
};

#endif // WEATHER5_H
