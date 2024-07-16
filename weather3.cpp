#include "weather3.h"
#include "ui_weather3.h"

weather3::weather3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather3)
{
    ui->setupUi(this);
}

weather3::~weather3()
{
    delete ui;
}
