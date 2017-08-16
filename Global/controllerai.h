#ifndef CONTROLLERAI_H
#define CONTROLLERAI_H

#include "Global/controller.h"

class ControllerAI : virtual public Controller
{
public:
    ControllerAI(GameEngine* _engine);
};

#endif  //CONTROLLERAI_H
