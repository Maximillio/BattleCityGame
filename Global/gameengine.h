#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#define FRAME_TIME 30 //ms

#include "Global/gamefield.h"
#include "Unmovable/wallbrick.h"
#include "Unmovable/wallsteel.h"
#include "Unmovable/base.h"
#include "Movable/tankai.h"
#include "Movable/tankplayer.h"
#include "Global/segment2d.h"
#include "Global/controllerAI.h"
#include "Global/controllerPlayer.h"

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;



class GameEngine : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariant input READ getInput WRITE setInput) //Input variable, both accessable to C++ and QML
private:
    const float                  gridSize = 50; // Size of game grid on screen
    volatile bool                gameStop;      // Flag fro game loop to stop
    GameField                    gameField;     // Game field variable
    TankPlayer*                  player;        // Reference to player's tank on game field
    Base*                        base;          // Reference to base
    vector<TankAI*>              enemies;       // AI enemies vector
    int                          input;         // Stores user's current comand
    vector<Movable*>             movingObjects; // Stores all movable objects for updating each game cycle
    std::mutex                   mutex;         // Mutex variable to sychronice access to volatile elements

    Result checkCollisions(const int& _x, const int& _y, GameObject* _target);
    void checkBulletCollision(const int& _X, const int& _Y, Movable* _bullet);
    bool checkOutOfField(Movable* _object);
    bool isCollision(GameObject* _first, const GameObject* _second);
    bool checkGameOver();
    void initLevel();
    void processInput();
    void update();
    void render();
    void gameLoop();
public:
    void setInput(QVariant _input);
    QVariant getInput() const;
    void addMovingObject(Movable *_object);
    void startGame();
    GameEngine();
    ~GameEngine();


signals:
    void draw(QVariant _x, QVariant _y, QVariant _type, QVariant _dir);
    void clear();
    void gameOverMessage(QVariant _message);
public slots:
    Q_INVOKABLE void stopGame();
    Q_INVOKABLE bool getGameStop() const;
};

#endif // GAMEENGINE_H
