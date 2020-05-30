TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_LFLAGS += -no-pie

SOURCES += \
        arper.cpp \
        main.cpp

HEADERS += \
    arper.h
