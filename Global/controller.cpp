#include "controller.h"

Controller::Controller()
{

}

Controller::~Controller()
{

}

void Controller::shoot(Bullet* _bullet)
{
    if (movingObjects != nullptr)
    {
        movingObjects->push_back(_bullet);
    }
}

void Controller::tankDestroyed()
{
    tank = nullptr;
}
