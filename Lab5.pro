QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aumento.cpp \
    bloque.cpp \
    bomba.cpp \
    destruible.cpp \
    enemigo.cpp \
    explotion.cpp \
    main.cpp \
    juego.cpp \
    objeto.cpp \
    personaje.cpp

HEADERS += \
    aumento.h \
    bloque.h \
    bomba.h \
    destruible.h \
    enemigo.h \
    explotion.h \
    juego.h \
    objeto.h \
    personaje.h

FORMS += \
    juego.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    imagenes.qrc
