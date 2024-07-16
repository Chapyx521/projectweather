#include "weather11.h"
#include "ui_weather11.h"

weather11::weather11(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather11)
{
    ui->setupUi(this);
}

weather11::~weather11()
{
    delete ui;
}
