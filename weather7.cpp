#include "weather7.h"
#include "ui_weather7.h"

weather7::weather7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather7)
{
    ui->setupUi(this);
}

weather7::~weather7()
{
    delete ui;
}
