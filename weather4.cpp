#include "weather4.h"
#include "ui_weather4.h"

weather4::weather4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::weather4)
{
    ui->setupUi(this);
}

weather4::~weather4()
{
    delete ui;
}
