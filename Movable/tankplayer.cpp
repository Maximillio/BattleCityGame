#include "tankplayer.h"

TankPlayer::TankPlayer(pair<float, float> _position)
{
    speed    = 5;
    position = _position;
    type     = "TankPlayer";
}

Result TankPlayer::onCollision()
{
    return Tank::onCollision();
}

void TankPlayer::handleInput(int _action)
{
    Tank::handleInput(_action);
}

