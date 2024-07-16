#include "weather10.h"
#include "ui_weather10.h"

weather10::weather10(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather10)
{
    ui->setupUi(this);
}

weather10::~weather10()
{
    delete ui;
}
