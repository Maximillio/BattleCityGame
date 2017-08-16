#ifndef MOVABLE_H
#define MOVABLE_H

#include "gameobject.h"

class Movable : public GameObject
{
protected:
    float         speed = 0;

public:
    Movable();
    virtual ~Movable();
    virtual void move(const Direction &_d);
    virtual Result onCollision() = 0;
    virtual void update(vector<Movable*>* _movingObjects) = 0;

    float getSpeed() const;
};

#endif // MOVABLE_H
