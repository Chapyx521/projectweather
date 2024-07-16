#include "weather5.h"
#include "ui_weather5.h"

weather5::weather5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather5)
{
    ui->setupUi(this);
}

weather5::~weather5()
{
    delete ui;
}
