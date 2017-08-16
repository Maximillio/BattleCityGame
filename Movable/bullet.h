#ifndef BULLET_H
#define BULLET_H

#include "Global/movable.h"

class Bullet : public Movable
{
public:
    Bullet(pair<float, float> _pos, Direction _dir);
    void update(vector<Movable*>* _movingObjects);
    Result onCollision();
};

#endif // BULLET_H
