#ifndef TANK_H
#define TANK_H


#include "Movable/bullet.h"
using namespace std;
using namespace std::chrono;


class Tank : public Movable
{
protected:
    int  action = -1;
    Bullet* shoot();
public:
    Tank();
    virtual ~Tank();
    virtual Result onCollision();
    virtual void handleInput(int _action);
    void update(vector<Movable*>* _movingObjects);

};

#endif // TANK_H
