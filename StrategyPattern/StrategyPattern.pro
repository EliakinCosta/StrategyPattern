QT += core
QT -= gui

TARGET = StrategyPattern
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    ordenationstrategy.cpp \
    bubblesortordenation.cpp \
    insertionsortordenation.cpp

HEADERS += \
    ordenationstrategy.h \
    bubblesortordenation.h \
    insertionsortordenation.h

