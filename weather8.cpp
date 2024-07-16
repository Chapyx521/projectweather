#include "weather8.h"
#include "ui_weather8.h"

weather8::weather8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather8)
{
    ui->setupUi(this);
}

weather8::~weather8()
{
    delete ui;
}
