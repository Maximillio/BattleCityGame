#ifndef CONTROLLER_H
#define CONTROLLER_H

class Bullet;
class GameEngine;
class Tank;

class Controller
{
protected:
    GameEngine*       engine;
    Tank*             tank;
    vector<Movable*>* movObj;
public:
    Controller();
    ~Controller();
    void shoot(Bullet* _bullet);
    void setTank(const Tank* _t);
    void tankDestroyed();
};

#endif // CONTROLLER_H
