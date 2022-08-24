QT       += core gui opengl openglwidgets 3dcore 3dextras
include(../QtGifImage-master/src/gifimage/qtgifimage.pri)

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    ogl.cpp \
    ../parser/parser.c \
    ../parser/move.c \
    ../parser/rotate.c \
    ../parser/scale.c

HEADERS += \
    mainwindow.h \
    ogl.h \
    ../parser/3d.h

FORMS += \
    mainwindow.ui

#LIBS += -lOpenGL

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    style.qrc
