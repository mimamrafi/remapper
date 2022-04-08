QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

win32:RC_ICONS += ../images/remapper.ico
VERSION = 1.0.0.0
QMAKE_TARGET_COMPANY = Nicslab Inc
TARGET = Remapper
QMAKE_TARGET_PRODUCT = Remapper
QMAKE_TARGET_COPYRIGHT = © $${QMAKE_TARGET_COMPANY}

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../images/remapper.ico \
    ../images/remapper.png

RESOURCES += \
    ../images/resources.qrc
