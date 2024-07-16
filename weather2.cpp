#include "weather2.h"
#include "ui_weather2.h"

weather2::weather2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather2)
{
    ui->setupUi(this);
}

weather2::~weather2()
{
    delete ui;
}
