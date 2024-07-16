#include "weather1.h"
#include "ui_weather1.h"

weather1::weather1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather1)
{
    ui->setupUi(this);
}

weather1::~weather1()
{
    delete ui;
}
