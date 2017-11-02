#include "gameengine.h"

void GameEngine::initLevel()
{
    gameField.field[1][1]   = new WallBrick(pair<float,float>(1 * gridSize, 1 * gridSize));
    gameField.field[1][2]   = new WallBrick(pair<float,float>(1 * gridSize, 2 * gridSize));
    gameField.field[1][3]   = new WallBrick(pair<float,float>(1 * gridSize, 3 * gridSize));

    gameField.field[3][1]   = new WallBrick(pair<float,float>(3 * gridSize, 1 * gridSize));
    gameField.field[3][2]   = new WallBrick(pair<float,float>(3 * gridSize, 2 * gridSize));
    gameField.field[3][3]   = new WallBrick(pair<float,float>(3 * gridSize, 3 * gridSize));

    gameField.field[5][0]   = new WallBrick(pair<float,float>(5 * gridSize, 0 * gridSize));
    gameField.field[5][1]   = new WallBrick(pair<float,float>(5 * gridSize, 1 * gridSize));
    gameField.field[6][1]   = new WallBrick(pair<float,float>(6 * gridSize, 1 * gridSize));
    gameField.field[7][1]   = new WallBrick(pair<float,float>(7 * gridSize, 1 * gridSize));
    gameField.field[7][0]   = new WallBrick(pair<float,float>(7 * gridSize, 0 * gridSize));
    gameField.field[6][0]   = new Base(pair<float,float>(6 * gridSize, 0 * gridSize));
    base                    = dynamic_cast<Base*>(gameField.field[6][0]);

    gameField.field[5][3]   = new WallBrick(pair<float,float>(5 * gridSize, 3 * gridSize));
    gameField.field[5][4]   = new WallBrick(pair<float,float>(5 * gridSize, 4 * gridSize));
    gameField.field[6][4]   = new WallBrick(pair<float,float>(6 * gridSize, 4 * gridSize));
    gameField.field[7][4]   = new WallBrick(pair<float,float>(7 * gridSize, 4 * gridSize));
    gameField.field[7][3]   = new WallBrick(pair<float,float>(7 * gridSize, 3 * gridSize));

    gameField.field[9][1]   = new WallBrick(pair<float,float>(9 * gridSize, 1 * gridSize));
    gameField.field[9][2]   = new WallBrick(pair<float,float>(9 * gridSize, 2 * gridSize));
    gameField.field[9][3]   = new WallBrick(pair<float,float>(9 * gridSize, 3 * gridSize));

    gameField.field[11][1]  = new WallBrick(pair<float,float>(11 * gridSize, 1 * gridSize));
    gameField.field[11][2]  = new WallBrick(pair<float,float>(11 * gridSize, 2 * gridSize));
    gameField.field[11][3]  = new WallBrick(pair<float,float>(11 * gridSize, 3 * gridSize));

    gameField.field[1][8]   = new WallBrick(pair<float,float>(1 * gridSize, 8 * gridSize));
    gameField.field[1][9]   = new WallBrick(pair<float,float>(1 * gridSize, 9 * gridSize));
    gameField.field[1][10]  = new WallBrick(pair<float,float>(1 * gridSize, 10 * gridSize));
    gameField.field[1][11]  = new WallBrick(pair<float,float>(1 * gridSize, 11 * gridSize));

    gameField.field[3][8]   = new WallBrick(pair<float,float>(3 * gridSize, 8 * gridSize));
    gameField.field[3][9]   = new WallBrick(pair<float,float>(3 * gridSize, 9 * gridSize));
    gameField.field[3][10]  = new WallBrick(pair<float,float>(3 * gridSize, 10 * gridSize));
    gameField.field[3][11]  = new WallBrick(pair<float,float>(3 * gridSize, 11 * gridSize));

    gameField.field[5][9]   = new WallBrick(pair<float,float>(5 * gridSize, 9 * gridSize));
    gameField.field[5][10]  = new WallBrick(pair<float,float>(5 * gridSize, 10 * gridSize));
    gameField.field[5][11]  = new WallBrick(pair<float,float>(5 * gridSize, 11 * gridSize));

    gameField.field[6][9]   = new WallSteel(pair<float,float>(6 * gridSize, 9 * gridSize));

    gameField.field[7][9]   = new WallBrick(pair<float,float>(7 * gridSize, 9 * gridSize));
    gameField.field[7][10]  = new WallBrick(pair<float,float>(7 * gridSize, 10 * gridSize));
    gameField.field[7][11]  = new WallBrick(pair<float,float>(7 * gridSize, 11 * gridSize));

    gameField.field[9][8]   = new WallBrick(pair<float,float>(9 * gridSize, 8 * gridSize));
    gameField.field[9][9]   = new WallBrick(pair<float,float>(9 * gridSize, 9 * gridSize));
    gameField.field[9][10]  = new WallBrick(pair<float,float>(9 * gridSize, 10 * gridSize));
    gameField.field[9][11]  = new WallBrick(pair<float,float>(9 * gridSize, 11 * gridSize));

    gameField.field[11][8]  = new WallBrick(pair<float,float>(11 * gridSize, 8 * gridSize));
    gameField.field[11][9]  = new WallBrick(pair<float,float>(11 * gridSize, 9 * gridSize));
    gameField.field[11][10] = new WallBrick(pair<float,float>(11 * gridSize, 10 * gridSize));
    gameField.field[11][11] = new WallBrick(pair<float,float>(11 * gridSize, 11 * gridSize));

    gameField.field[6][3]   = new TankPlayer(pair<float,float>(6* gridSize, 3 * gridSize));
    movingObjects.push_back(dynamic_cast<Movable*>(gameField.field[6][3]));
    player                  = dynamic_cast<TankPlayer*>(gameField.field[6][3]);

    gameField.field[4][5]  = new TankAI(pair<float,float>(4 * gridSize, 5 * gridSize));
    gameField.field[8][7]  = new TankAI(pair<float,float>(8 * gridSize, 7 * gridSize));
    movingObjects.push_back(dynamic_cast<Movable*>(gameField.field[4][5]));
    movingObjects.push_back(dynamic_cast<Movable*>(gameField.field[8][7]));
    enemies.push_back(dynamic_cast<TankAI*>(gameField.field[4][5]));
    enemies.push_back(dynamic_cast<TankAI*>(gameField.field[8][7]));
}

void GameEngine::processInput()
{

    mutex.lock();
    if (player)
    {
        switch(input)
        {
            case Action::Shoot:
            {

            }
            default:
            {
                player->handleInput(getInput().toInt());
            }
        }
    }
    mutex.unlock();
    vector<TankAI*>::iterator           enemiesIt   = enemies.begin();
    TankAI*                             enemy       = 0;
    int                                 enemyAction = -1;
    static default_random_engine        generator;
    static normal_distribution<double>  distribution(1.5, 4.0);

    for(;enemiesIt != enemies.end(); ++enemiesIt)
    {
        enemy = *enemiesIt;
        if (enemy)
        {
            enemyAction = static_cast<int>(distribution(generator));
            if (   (enemyAction >= 0)
                && (enemyAction <= 4))
            {
                enemy->handleInput(enemyAction);
            }
            else
            {
                enemy->handleInput(-1);
            }
        }
    }

}

void GameEngine::update()
{
    Movable*    temp   = 0;
    GameObject* target = 0;
    int oldX,oldY, newX, newY = 0;
    for (unsigned int i = 0; i <  movingObjects.size(); ++i)
    {
        temp = movingObjects[i];
        oldX = static_cast<int>(temp->getPosition().first / 50);
        oldY = static_cast<int>(temp->getPosition().second / 50);
        temp->update(&movingObjects);
        newX = static_cast<int>(temp->getPosition().first / 50);
        newY = static_cast<int>(temp->getPosition().second / 50);
        if (temp->getType() == "Bullet")
        {
            checkBulletCollision(newX, newY, temp);
        }
        else
        {
            if (checkCollisions(oldX,oldY, target) == Result::None)
            {
                if ((oldX != newX) || (oldY != newY))
                {
                    gameField.field[newX][newY] = gameField.field[oldX][oldY];
                    gameField.field[oldX][oldY] = 0;
                }
            }
        }
    }
}

void GameEngine::render()
{
    vector<vector<GameObject*> >::iterator it    = gameField.field.begin();
    vector<GameObject*>::iterator          inter;
    GameObject*                            temp;
    for(; it != gameField.field.end(); ++it)
    {
        for(inter = it->begin();inter != it->end(); ++inter)
        {
            temp = *inter;
            if (temp != nullptr)
            {
               emit draw(temp->getPosition().first, temp->getPosition().second, temp->getType(), temp->getDir());
            }
        }
    }
    vector<Movable*>::iterator movIter = movingObjects.begin();
    for (;movIter != movingObjects.end(); ++movIter)
    {
        temp = *movIter;
        if (temp && temp->getType() == "Bullet")
        {
            emit draw(temp->getPosition().first, temp->getPosition().second, temp->getType(), temp->getDir());
        }
    }
}

void GameEngine::gameLoop()
{
    high_resolution_clock::time_point startPoint;
    high_resolution_clock::time_point endPoint;
    duration<double> timeToWait;
    std::chrono::milliseconds frameTime(FRAME_TIME);
    mutex.lock();
    gameStop = false;
    mutex.unlock();
    while (true)
    {
        mutex.lock();
        if (!gameStop)
        {
            gameStop = checkGameOver();
        }
        if (gameStop)
        {
            mutex.unlock();
            break;
        }
        mutex.unlock();
        startPoint = high_resolution_clock::now();
        clear();
        processInput();
        update();
        render();
        endPoint   = high_resolution_clock::now();
        timeToWait = duration_cast<duration<double>>(frameTime - (endPoint - startPoint));
        sleep_for(timeToWait);
    }
}

bool GameEngine::getGameStop() const
{
    return gameStop;
}

Result GameEngine::checkCollisions(const int& _x, const int& _y, GameObject* _target)
{
    _target = 0;
    if (_x > 0)
    {
        if (_y > 0)
        {
            if (isCollision(gameField.field[_x][_y], gameField.field[_x-1][_y-1]))
            {
                _target = gameField.field[_x-1][_y-1];
                return dynamic_cast<Movable*>(gameField.field[_x][_y])->onCollision();
            }
        }
        if (isCollision(gameField.field[_x][_y], gameField.field[_x-1][_y]))
        {
            _target = gameField.field[_x-1][_y];
            return dynamic_cast<Movable*>(gameField.field[_x][_y])->onCollision();
        }
        if (_y < 12)
        {
            if (isCollision(gameField.field[_x][_y], gameField.field[_x-1][_y+1]))
            {
                _target = gameField.field[_x-1][_y+1];
                return dynamic_cast<Movable*>(gameField.field[_x][_y])->onCollision();
            }
        }
    }
    if (_x < 12)
    {
        if (_y > 0)
        {
            if (isCollision(gameField.field[_x][_y], gameField.field[_x+1][_y-1]))
            {
                _target = gameField.field[_x+1][_y-1];
                return dynamic_cast<Movable*>(gameField.field[_x][_y])->onCollision();
            }
        }
        if (isCollision(gameField.field[_x][_y], gameField.field[_x+1][_y]))
        {
            _target = gameField.field[_x+1][_y];
            return dynamic_cast<Movable*>(gameField.field[_x][_y])->onCollision();
        }
        if (_y < 12)
        {
            if (isCollision(gameField.field[_x][_y], gameField.field[_x+1][_y+1]))
            {
                _target = gameField.field[_x+1][_y+1];
                return dynamic_cast<Movable*>(gameField.field[_x][_y])->onCollision();
            }
        }

    }
    if (_y > 0)
    {
        if (isCollision(gameField.field[_x][_y], gameField.field[_x][_y-1]))
        {
            _target = gameField.field[_x][_y-1];
            return dynamic_cast<Movable*>(gameField.field[_x][_y])->onCollision();
        }
    }
    if (_y < 12)
    {
        if (isCollision(gameField.field[_x][_y], gameField.field[_x][_y+1]))
        {
            _target = gameField.field[_x][_y+1];
            return dynamic_cast<Movable*>(gameField.field[_x][_y])->onCollision();
        }
    }
    if (gameField.field[_x][_y] && checkOutOfField(dynamic_cast<Movable*>(gameField.field[_x][_y])))
    {
        return dynamic_cast<Movable*>(gameField.field[_x][_y])->onCollision();
    }
    return Result::None;
}

void GameEngine::checkBulletCollision(const int &_X, const int &_Y, Movable* _bullet)
{
    GameObject* target            = 0;
    bool        collisionDetected = false;
    collisionDetected = checkOutOfField(_bullet);
    if (!collisionDetected)
    {
        if (isCollision(_bullet, gameField.field[_X][_Y]))
        {
            collisionDetected = true;
            target            = gameField.field[_X][_Y];
        }
        else
        {
            collisionDetected = (checkCollisions(_X,_Y, target) == Result::Destroyed);
        }
    }
    if (collisionDetected)
    {

        movingObjects.erase(find(movingObjects.begin(),movingObjects.end(), _bullet));
        delete _bullet;
        if (target && target->getIsDestructabe())
        {
            if (find(movingObjects.begin(),movingObjects.end(), target) != movingObjects.end())
            {
                movingObjects.erase(find(movingObjects.begin(),movingObjects.end(), target));
                if (target->getType() == "TankAI")
                {
                    enemies.erase(find(enemies.begin(),enemies.end(), target));
                }
                if (target->getType() == "TankPlayer")
                {
                    player = 0;
                }
            }
            if (target->getType() == "Base")
            {
                base = 0;
            }
            delete gameField.field[_X][_Y];
            gameField.field[_X][_Y] = 0;
        }
    }
}

bool GameEngine::checkOutOfField(Movable *_object)
{
    pair<float, float> pos = _object->getPosition();
    if (   pos.first < 0
        || pos.first > 600
        || pos.second < 0
        || pos.second > 600)
    {
        return true;
    }
    return false;
}

bool GameEngine::isCollision(GameObject* _first, const GameObject* _second) //Based on checking if both proections of squares are crossing each other
{
    if (_first && _second)
    {
        Segment1D XAB(_first->getPosition().first, _first->getPosition().first + _first->getSize()); //
        Segment1D YAB(_first->getPosition().second, _first->getPosition().second + _first->getSize());
        Segment1D XCD(_second->getPosition().first, _second->getPosition().first + _second->getSize());
        Segment1D YCD(_second->getPosition().second, _second->getPosition().second + _second->getSize());

        Segment1D XAC(XAB.A, XCD.A);
        Segment1D XAD(XAB.A, XCD.B);
        Segment1D XBC(XAB.B, XCD.A);
        Segment1D XBD(XAB.B, XCD.B);

        Segment1D YAC(YAB.A, YCD.A);
        Segment1D YAD(YAB.A, YCD.B);
        Segment1D YBC(YAB.B, YCD.A);
        Segment1D YBD(YAB.B, YCD.B);

        bool XCross = false;
        bool YCross = false;

        if ((XAC.length() < XCD.length()) && (XAD.length() < XCD.length())) {XCross = true;}
        if ((XBC.length() < XCD.length()) && (XBD.length() < XCD.length())) {XCross = true;}
        if ((XAB.A == XCD.A) && (XAB.B == XCD.B))                           {XCross = true;}

        if ((YAC.length() < YCD.length()) && (YAD.length() < YCD.length())) {YCross = true;}
        if ((YBC.length() < YCD.length()) && (YBD.length() < YCD.length())) {YCross = true;}
        if ((YAB.A == YCD.A) && (YAB.B == YCD.B))                           {YCross = true;}

        return (XCross && YCross);
    }
    else
    {
        return false;
    }
}

bool GameEngine::checkGameOver()
{
    if (!player || !base)
    {
        emit gameOverMessage(QVariant("You lose."));
        return true;
    }
    if (enemies.size() == 0)
    {
        emit gameOverMessage(QVariant("You win."));
        return true;
    }
    return false;
}

void GameEngine::addMovingObject(Movable* _object)
{
    if (_object != nullptr)
    {
        movingObjects.push_back(_object);
    }
}

void GameEngine::startGame()
{
    gameLoop();
}

GameEngine::GameEngine()
{
    initLevel();
}

GameEngine::~GameEngine()
{
    for (vector<Movable*>::iterator it; it != movingObjects.end(); ++it)
    {
        delete *it;
    }
    for (vector<TankAI*>::iterator it; it != enemies.end(); ++it)
    {
        delete *it;
    }
    if (player)
    {
        delete player;
    }
    if (base)
    {
        delete base;
    }

}

void GameEngine::stopGame()
{
    mutex.lock();
    gameStop = true;
    mutex.unlock();
}
QVariant GameEngine::getInput() const
{
    return input;
}
void GameEngine::setInput(QVariant _input)
{
    input = _input.toInt();
}
