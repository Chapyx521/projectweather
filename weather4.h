#ifndef WEATHER4_H
#define WEATHER4_H

#include <QDialog>

namespace Ui {
class weather4;
}

class weather4 : public QDialog
{
    Q_OBJECT

public:
    explicit weather4(QWidget *parent = nullptr);
    ~weather4();

private:
    Ui::weather4 *ui;
};

#endif // WEATHER4_H
