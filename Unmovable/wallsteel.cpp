#include "wallsteel.h"

WallSteel::WallSteel(pair<float, float> _position)
{
    position      = _position;
    isDestructabe = false;
    type          = "WallSteel";
}
