#ifndef WALLBRICK_H
#define WALLBRICK_H

#include "wall.h"

class WallBrick : public Wall
{
public:
    WallBrick(pair<float, float> _position);
};

#endif // WALLBRICK_H
