#include "gameobject.h"

bool GameObject::getIsDestructabe() const
{
    return isDestructabe;
}

GameObject::GameObject()
{
    
}

GameObject::~GameObject()
{
    
}

pair<float, float> GameObject::getPosition() const
{
    return position;
}

void GameObject::setPosition(const pair<float, float> &value)
{
    position = value;
}

float GameObject::getSize() const
{
    return size;
}

void GameObject::setSize(float value)
{
    size = value;
}

QString GameObject::getType() const
{
    return type;
}

Direction GameObject::getDir() const
{
    return dir;
}

void GameObject::setDir(const Direction &value)
{
    dir = value;
}




