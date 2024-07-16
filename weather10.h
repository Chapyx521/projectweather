#ifndef WEATHER10_H
#define WEATHER10_H

#include <QDialog>

namespace Ui {
class weather10;
}

class weather10 : public QDialog
{
    Q_OBJECT

public:
    explicit weather10(QWidget *parent = nullptr);
    ~weather10();

private:
    Ui::weather10 *ui;
};

#endif // WEATHER10_H
