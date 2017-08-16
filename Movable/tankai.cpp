#include "tankai.h"

TankAI::TankAI(pair<float, float> _position)
{
    position = _position;
    speed    = 2.5;
    type     = "TankAI";
}

Result TankAI::onCollision()
{
    return Tank::onCollision();
}
void TankAI::handleInput(int _action)
{
    Tank::handleInput(_action);
}
