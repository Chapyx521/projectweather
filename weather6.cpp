#include "weather6.h"
#include "ui_weather6.h"

weather6::weather6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather6)
{
    ui->setupUi(this);
}

weather6::~weather6()
{
    delete ui;
}
