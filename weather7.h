#ifndef WEATHER7_H
#define WEATHER7_H

#include <QDialog>

namespace Ui {
class weather7;
}

class weather7 : public QDialog
{
    Q_OBJECT

public:
    explicit weather7(QWidget *parent = nullptr);
    ~weather7();

private:
    Ui::weather7 *ui;
};

#endif // WEATHER7_H
