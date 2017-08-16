import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 1.2
import "qrc:/Resources/componentCreator.js" as DrawEngine

ApplicationWindow
{

    title: qsTr("Battle City")
    width: 650
    height: 650
    color: "#000000"
    visible: true
    id: appWindow
    objectName: "mainWindow"

    function draw(_x, _y, _type, _dir)
    {
        DrawEngine.createSpriteObjects(_x, _y, _type, _dir);
    }
    function clearScreen()
    {
        DrawEngine.clearScreen();
    }
    function gameOverMessage(_message)
    {
        DrawEngine.gameOverMessage(_message);
    }
    onClosing:
    {
        if (!(gameEngine.getGameStop()))
            {
                gameEngine.stopGame();
            }
    }
    Item
    {
        focus: true
        Keys.onPressed:
        {

                if (event.key === Qt.Key_Up)
                {
                    gameEngine.input = DrawEngine.actionEnum.UP;
                    event.accepted = true;
                }
                if (event.key === Qt.Key_Right)
                {
                    gameEngine.input = DrawEngine.actionEnum.RIGHT;
                    event.accepted = true;
                }
                if (event.key === Qt.Key_Down)
                {
                    gameEngine.input = DrawEngine.actionEnum.DOWN;
                    event.accepted = true;
                }
                if (event.key === Qt.Key_Left)
                {
                    gameEngine.input = DrawEngine.actionEnum.LEFT;
                    event.accepted = true;
                }
                if (event.key === Qt.Key_Space)
                {
                    gameEngine.input = DrawEngine.actionEnum.SHOOT;
                    event.accepted = true;
                }
        }
        Keys.onReleased:
        {
            gameEngine.input = -1;
        }
        Canvas
        {
            visible: true;
            id: canvas
            width: appWindow.width
            height: appWindow.height
        }
    }

}

