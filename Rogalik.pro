TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -L/usr/local/lib -lSDL2

SOURCES += main.cpp \
    game.cpp \
    gamewindow.cpp \
    gamepreferences.cpp \
    sprite.cpp

HEADERS += \
    game.h \
    gamewindow.h \
    gamepreferences.h \
    sprite.h
