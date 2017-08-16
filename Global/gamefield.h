#ifndef GAMEFIELD_H
#define GAMEFIELD_H

#include "gameobject.h"

struct GameField
{
public:
    vector<vector<GameObject*> > field;
    GameField();
    ~GameField();
};

#endif // GAMEFIELD_H
