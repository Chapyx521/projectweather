#include "weather9.h"
#include "ui_weather9.h"

weather9::weather9(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather9)
{
    ui->setupUi(this);
}

weather9::~weather9()
{
    delete ui;
}
