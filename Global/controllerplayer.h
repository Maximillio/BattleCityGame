#ifndef CONTROLLERPLAYER_H
#define CONTROLLERPLAYER_H

#include <QObject>
#include "Global/controller.h"

class ControllerPlayer : public QObject, virtual public Controller
{
    Q_OBJECT
public:
    ControllerPlayer();
public slots:
    void handleInput(int _input);
};

#endif // CONTROLLERPLAYER_H
