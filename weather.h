#ifndef WEATHER_H
#define WEATHER_H

#include <QDialog>

namespace Ui {
class Weather;
}

class Weather : public QDialog
{
    Q_OBJECT

public:
    explicit Weather(QWidget *parent = nullptr);
    ~Weather();

private:
    Ui::Weather *ui;
};

#endif // WEATHER_H
