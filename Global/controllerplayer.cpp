#include "controllerplayer.h"

ControllerPlayer::ControllerPlayer()
{

}

void ControllerPlayer::handleInput(int _input)
{
    switch (_input)
    {
        case 1:
        {
             tank->move(Direction::Up);
             break;
        }
        case 2:
        {
             tank->move(Direction::Right);
             break;
        }
        case 3:
        {
             tank->move(Direction::Down);
             break;
        }
        case 4:
        {
             tank->move(Direction::Left);
             break;
        }
        case 5:
        {
            /*engine->addMovingObjects(tank->shoot());
            break;*/
        }
    }
}
