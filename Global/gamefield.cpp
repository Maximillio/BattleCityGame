#include "gamefield.h"

GameField::GameField()
{
    vector<GameObject*>* temp;
    for (int i = 0; i < 13; ++i)
    {
        temp = new vector<GameObject*>(13);
        temp->assign(13,0);
        field.push_back(*temp);
    }
    temp = 0;
}

GameField::~GameField()
{
    for (int i = 0; i < 13; ++i)
    {
        for (int j = 0; j < 13; ++j)
        {
            delete field[i][j];
        }
    }
}
