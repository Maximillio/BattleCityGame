#ifndef TANKAI_H
#define TANKAI_H

#include "tank.h"


class TankAI : public Tank
{
public:
    TankAI(pair<float, float> _position);
    void handleInput(int _action);
    Result onCollision();
};

#endif // TANKAI_H
