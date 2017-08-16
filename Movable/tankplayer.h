#ifndef TANKPLAYER_H
#define TANKPLAYER_H

#include "tank.h"

class TankPlayer : public Tank
{
public:
    TankPlayer(pair<float, float> _position);
    Result onCollision();
public:
    void handleInput(int _action);
};

#endif // TANKPLAYER_H
