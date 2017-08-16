#ifndef UNMOVABLE_H
#define UNMOVABLE_H

#include "gameobject.h"

class Unmovable : public GameObject
{
public:
    Unmovable();
    virtual ~Unmovable();
    void update(vector<Movable*>* _movingObjects);
};

#endif // UNMOVABLE_H
