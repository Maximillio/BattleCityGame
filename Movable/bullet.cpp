#include "bullet.h"

Bullet::Bullet(pair<float, float> _pos, Direction _dir)
{
    speed    = 10;
    size     = 15;
    position = _pos;
    dir      = _dir;
    type     = "Bullet";
}

void Bullet::update(vector<Movable*>* _movingObjects)
{
    move(dir);
}

Result Bullet::onCollision()
{
    return Result::Destroyed;
}
