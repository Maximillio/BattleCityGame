#include "tank.h"

Tank::Tank()
{

}
Tank::~Tank()
{

}

Bullet* Tank::shoot()
{ 
    static high_resolution_clock::time_point startDelay;
    static high_resolution_clock::time_point endDelay;
    static duration<double> delay;
    static bool wasShot = false;
    Bullet* newBullet = 0;
    if (wasShot)
    {
        endDelay = high_resolution_clock::now();
        delay = duration_cast<duration<double>>(endDelay - startDelay);
        if (delay > std::chrono::milliseconds(500))
        {
            wasShot = false;
        }
    }
    else
    {
        startDelay = high_resolution_clock::now();
        wasShot = true;
        pair<float, float> bulletPos = position;
        newBullet = new Bullet(bulletPos, dir);
        switch(dir)
        {
            case Direction::Up:
            {
                bulletPos.first  += (this->size/2) - newBullet->getSize()/2;
                bulletPos.second += this->size;
                newBullet->setPosition(bulletPos);
                break;
            }
            case Direction::Right:
            {
                bulletPos.first  += (this->size);
                bulletPos.second += (this->size/2) - newBullet->getSize()/2;
                newBullet->setPosition(bulletPos);
                break;
            }
            case Direction::Down:
            {
                bulletPos.first  += (this->size/2) - newBullet->getSize()/2;
                bulletPos.second -= newBullet->getSize();
                newBullet->setPosition(bulletPos);
                break;
            }
            case Direction::Left:
            {
                bulletPos.first  -= newBullet->getSize();
                bulletPos.second += (this->size/2) - newBullet->getSize()/2;
                newBullet->setPosition(bulletPos);
                break;
            }
        }

    }
    return newBullet;
}

Result Tank::onCollision()
{
    {
        switch (dir)
        {
            case Direction::Up:    {position.second -= speed; break;}
            case Direction::Right: {position.first  -= speed; break;}
            case Direction::Down:  {position.second += speed; break;}
            case Direction::Left:  {position.first  += speed; break;}
        }
    }
    return Result::Collided;
}

void Tank::handleInput(int _action)
{
    action = _action;
}

void Tank::update(vector<Movable *> *_movingObjects)
{
    switch (action)
    {
        case 0:{Movable::move(Direction::Up);       action = -1; break;}
        case 1:{Movable::move(Direction::Right);    action = -1; break;}
        case 2:{Movable::move(Direction::Down);     action = -1; break;}
        case 3:{Movable::move(Direction::Left);     action = -1; break;}
        case 4:
                {
                    Bullet* temp = shoot();
                    if (temp)
                    {
                        _movingObjects->push_back(temp);
                    }
                    action = -1;
                    break;
                }
    }

}
