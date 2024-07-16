#ifndef WEATHER3_H
#define WEATHER3_H

#include <QDialog>

namespace Ui {
class weather3;
}

class weather3 : public QDialog
{
    Q_OBJECT

public:
    explicit weather3(QWidget *parent = nullptr);
    ~weather3();

private:
    Ui::weather3 *ui;
};

#endif // WEATHER3_H
