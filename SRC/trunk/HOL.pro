#-------------------------------------------------
#
# Project created by QtCreator 2017-05-06T11:42:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HOL
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    logindlg.cpp \
    kingdom.cpp \
    settingpage.cpp \
    set_customkingdom.cpp \
    customkingdom_add.cpp \
    customkingdom_change.cpp \
    customkingdom_find.cpp \
    gameover.cpp \
    gamerecord.cpp \
    SystemWindow.cpp \
    Game.cpp \
    ClassicMode.cpp \
    BrawlMode.cpp \
    LegendsView.cpp \
    Legend.cpp \
    GameEnd.cpp

HEADERS  += \
    logindlg.h \
    kingdom.h \
    settingpage.h \
    set_customkingdom.h \
    customkingdom_add.h \
    customkingdom_change.h \
    customkingdom_find.h \
    gameover.h \
    gamerecord.h \
    SystemWindow.h \
    Game.h \
    ClassicMode.h \
    BrawlMode.h \
    LegendsView.h \
    Legend.h \
    GameEnd.h

FORMS    += \
    logindlg.ui \
    settingpage.ui \
    set_customkingdom.ui \
    customkingdom_add.ui \
    customkingdom_change.ui \
    customkingdom_find.ui \
    gameover.ui \
    gamerecord.ui \
    SystemWindow.ui \
    Game.ui \
    ClassicMode.ui \
    LegendsView.ui \
    GameEnd.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    gamepageicon.qrc

