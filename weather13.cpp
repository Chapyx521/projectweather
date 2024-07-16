#include "weather13.h"
#include "ui_weather13.h"

weather13::weather13(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather13)
{
    ui->setupUi(this);
}

weather13::~weather13()
{
    delete ui;
}
