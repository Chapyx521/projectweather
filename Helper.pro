QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    weather.cpp \
    weather1.cpp \
    weather10.cpp \
    weather11.cpp \
    weather12.cpp \
    weather13.cpp \
    weather2.cpp \
    weather3.cpp \
    weather4.cpp \
    weather5.cpp \
    weather6.cpp \
    weather7.cpp \
    weather8.cpp \
    weather9.cpp

HEADERS += \
    human.h \
    mainwindow.h \
    weather.h \
    weather1.h \
    weather10.h \
    weather11.h \
    weather12.h \
    weather13.h \
    weather2.h \
    weather3.h \
    weather4.h \
    weather5.h \
    weather6.h \
    weather7.h \
    weather8.h \
    weather9.h

FORMS += \
    mainwindow.ui \
    weather.ui \
    weather1.ui \
    weather10.ui \
    weather11.ui \
    weather12.ui \
    weather13.ui \
    weather2.ui \
    weather3.ui \
    weather4.ui \
    weather5.ui \
    weather6.ui \
    weather7.ui \
    weather8.ui \
    weather9.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
