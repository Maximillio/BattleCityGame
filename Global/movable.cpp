#include "movable.h"

Movable::Movable()
{
    
}

Movable::~Movable()
{

}

float Movable::getSpeed() const
{
    return speed;
}

void Movable::move(const Direction &_d)
{
    switch(_d)
    {
    case Direction::Up:    {position.second += speed; dir = _d; break;}
    case Direction::Right: {position.first  += speed; dir = _d; break;}
    case Direction::Down:  {position.second -= speed; dir = _d; break;}
    case Direction::Left:  {position.first  -= speed; dir = _d; break;}
    }
}


