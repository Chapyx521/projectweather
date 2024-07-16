#ifndef WEATHER9_H
#define WEATHER9_H

#include <QDialog>

namespace Ui {
class weather9;
}

class weather9 : public QDialog
{
    Q_OBJECT

public:
    explicit weather9(QWidget *parent = nullptr);
    ~weather9();

private:
    Ui::weather9 *ui;
};

#endif // WEATHER9_H
