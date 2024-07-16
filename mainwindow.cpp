#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "weather.h"
#include "weather1.h"
#include "human.h"
#include "weather2.h"
#include "weather3.h"
#include "weather4.h"
#include "weather5.h"
#include "weather6.h"
#include "weather7.h"
#include "weather8.h"
#include "weather9.h"
#include "weather10.h"
#include "weather11.h"
#include "weather12.h"
#include "weather13.h"
#include <QCoreApplication>
#include <QNetworkAccessManager> // Менеджер сетевых запросов
#include <QNetworkReply>// Ответы на сетевые запросы
#include <QDebug>
#include <QSslConfiguration>//передача информации об открытом SSL-соединении
#include <QJsonDocument> //  обертывает полный документ JSON и может читать этот документ и записывать его в текстовое представление
#include <QJsonObject>//общий класс, который разделяет данные с документом, из которого он был создан, до тех пор, пока он не изменяется.
#include <QApplication>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QNetworkAccessManager *mgr = new QNetworkAccessManager();//создание объекта для отправки сетевых запросов

    // QNetworkRequest для GET-запроса
    QNetworkRequest request(QUrl("https://api.open-meteo.com/v1/forecast?latitude=55.85&longitude=37.48&current=temperature_2m&hourly=temperature_2m&daily=weather_code&timezone=Europe%2FMoscow"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");//установка заголовка в запросе.
    // Отключение проверки сертификата SSL
    QSslConfiguration sslConfig = QSslConfiguration::defaultConfiguration();
    sslConfig.setPeerVerifyMode(QSslSocket::VerifyNone);
    request.setSslConfiguration(sslConfig);//установка конфигурации SSL для запроса
    // Отправка запроса
    QNetworkReply *reply = mgr->get(request);
    // Соединение сигнала о завершении запроса со слотом
    QObject::connect(reply, &QNetworkReply::finished, [=]() {
        // Проверка статуса ответа
        if (reply->error() == QNetworkReply::NoError) {
            // Вывод ответа
            QByteArray data = reply->readAll();
            QJsonDocument json = QJsonDocument::fromJson(data);
            qDebug()<<data;
            QJsonObject root = json.object();//получение корневого объекта JSON-документа
            QJsonObject current = root["current"].toObject();
            double temperature = current["temperature_2m"].toDouble();
            ui->label_6->setNum(temperature);
        }
        else {
            qDebug() << "Ошибка";
        }
        // Удаляем объект QNetworkReply
        reply->deleteLater();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

Human::Human(const QString gender)
    :m_gender(gender)
{
}

void Human::showAdvice(double temperature) const//определение метода класса
{
        if (m_gender == "Муж" || m_gender == "Мужской" || m_gender == "Мужчина") {
            if (temperature >= 40) {
                QMessageBox::critical(nullptr, "Ошибка", "Убедитесь, что данные указаны верно");
            }
            if (temperature >= 25 && temperature < 40) {
                Weather window;
                window.setModal(true);
                window.exec();
            }
            if (temperature >= 20 && temperature < 25) {
                weather1 window1;
                window1.setModal(true);
                window1.exec();
            }
            if (temperature >= 15 && temperature < 20) {
                weather2 window2;
                window2.setModal(true);
                window2.exec();
            }
            if (temperature >= 5 && temperature < 15) {
                weather3 window3;
                window3.setModal(true);
                window3.exec();
            }
            if (temperature >= -5 && temperature < 5) {
                weather4 window4;
                window4.setModal(true);
                window4.exec();
            }
            if (temperature >= -15 && temperature < -5) {
                weather5 window5;
                window5.setModal(true);
                window5.exec();
            }
            if (temperature >= -30 && temperature < -15) {
                weather6 window6;
                window6.setModal(true);
                window6.exec();
            }
            if (temperature < -30) {
                QMessageBox::information(nullptr, "Совет", "Вам стоит остаться дома");
            }
        } else if (m_gender == "Жен" || m_gender == "Женский" || m_gender == "Женщина") {
            if (temperature >= 40) {
                QMessageBox::critical(nullptr, "Ошибка", "Убедитесь, что данные указаны верно");
            }
            if (temperature >= 25 && temperature < 40) {
                weather7 window7;
                window7.setModal(true);
                window7.exec();
            }
            if (temperature >= 20 && temperature < 25) {
                weather8 window8;
                window8.setModal(true);
                window8.exec();
            }
            if (temperature >= 15 && temperature < 20) {
                weather9 window9;
                window9.setModal(true);
                window9.exec();
            }
            if (temperature >= 5 && temperature < 15) {
                weather10 window10;
                window10.setModal(true);
                window10.exec();
            }
            if (temperature >= -5 && temperature < 5) {
                weather11 window11;
                window11.setModal(true);
                window11.exec();
            }
            if (temperature >= -15 && temperature < -5) {
                weather12 window12;
                window12.setModal(true);
                window12.exec();
            }
            if (temperature >= -30 && temperature < -15) {
                weather13 window13;
                window13.setModal(true);
                window13.exec();
            }
            if (temperature < -30) {
                QMessageBox::information(nullptr, "Совет", "Вам стоит остаться дома");
            }
        }
        else{
            QMessageBox::critical(nullptr, "Ошибка", "Убедитесь, что данные указаны верно(указан пол мужской или женский");
        }

}
void MainWindow::on_pushButton_clicked()
{
    QString gender = ui->Maleorfemale->text();
    double temperature = ui->TT->text().toDouble();
    Human human(gender);
    human.showAdvice(temperature);
}


