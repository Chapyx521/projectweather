#include "weather12.h"
#include "ui_weather12.h"

weather12::weather12(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather12)
{
    ui->setupUi(this);
}

weather12::~weather12()
{
    delete ui;
}
