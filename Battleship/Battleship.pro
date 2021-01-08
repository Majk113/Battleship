QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    battleship_engine.cpp \
    field.cpp \
    logger.cpp \
    main.cpp \
    battleship.cpp \
    message.cpp \
    network_layer.cpp

HEADERS += \
    battleship.h \
    battleship_engine.h \
    field.h \
    logger.h \
    message.h \
    network_layer.h

FORMS += \
    battleship.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
