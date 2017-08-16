#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "directionsenum.h"

using namespace std;
class Movable;

class GameObject
{
protected:
    pair<float, float> position; //first = X, second = Y
    QString            type;
    float              size          = 50;
    bool               isDestructabe = true;
    Direction          dir           = Direction::Up;
public:
    GameObject();
    virtual ~GameObject();
    virtual void update(vector<Movable*>* _movingObjects) = 0;
    pair<float, float> getPosition() const;
    void setPosition(const pair<float, float> &value);
    float getSize() const;
    void setSize(float value);
    QString getType() const;
    void setDir(const Direction &value);
    Direction getDir() const;
    bool getIsDestructabe() const;
};

#endif // GAMEOBJECT_H
