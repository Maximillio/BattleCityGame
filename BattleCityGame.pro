TEMPLATE = app

QT += qml quick

CONFIG += c++11

SOURCES += main.cpp \
    Global/gameobject.cpp \
    Global/movable.cpp \
    Global/unmovable.cpp \
    Movable/bullet.cpp \
    Movable/tank.cpp \
    Movable/tankai.cpp \
    Movable/tankplayer.cpp \
    Unmovable/base.cpp \
    Unmovable/wall.cpp \
    Unmovable/wallbrick.cpp \
    Unmovable/wallsteel.cpp \
    Global/gamefield.cpp \
    Global/gameengine.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
PRECOMPILED_HEADER = stable.h
HEADERS += \
    Global/directionsenum.h \
    Global/gameobject.h \
    Global/movable.h \
    Global/unmovable.h \
    Movable/bullet.h \
    Movable/tank.h \
    Movable/tankai.h \
    Movable/tankplayer.h \
    Unmovable/base.h \
    Unmovable/wall.h \
    Unmovable/wallbrick.h \
    Unmovable/wallsteel.h \
    Global/gamefield.h \
    Global/gameengine.h \
    Global/segment2d.h \
    stable.h

DISTFILES += \
    Resources/Explosion 1.PNG \
    Resources/Explosion 2.PNG
