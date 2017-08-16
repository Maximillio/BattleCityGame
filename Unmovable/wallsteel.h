#ifndef WALLSTEEL_H
#define WALLSTEEL_H

#include "wall.h"

class WallSteel : public Wall
{
public:
    WallSteel(pair<float, float> _position);
};

#endif // WALLSTEEL_H
