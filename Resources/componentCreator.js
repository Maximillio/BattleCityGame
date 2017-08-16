var component;
var sprite;
var context = [];
var actionEnum = {UP: 0, RIGHT: 1, DOWN: 2, LEFT: 3, SHOOT: 4};
function createSpriteObjects(_x,  _y, _type, _dir)
{
    var ret = false;
    if (_type !== "")
    {
        if (_type === "Bullet")
        {
            component = Qt.createComponent("qrc:/"+ _type +".qml");
            sprite = component.createObject(canvas, {"x": _x, "y": 635 - _y, "rotation": _dir * 90});
        }
        else
        {
            component = Qt.createComponent("qrc:/"+ _type +".qml");
            sprite = component.createObject(canvas, {"x": _x, "y": 600 - _y, "rotation": _dir * 90});
        }

        context.push(sprite);
        if (sprite === null) {
            // Error Handling
            console.log("Error creating object");
            ret = false;
        }
        else
        {
            ret = true;
        }
    }
    return ret
}
function clearScreen()
{
    while (context.length)
    {
        context.pop().destroy();
    }
}
function gameOverMessage(_message)
{
    component = Qt.createComponent("qrc:/EndGameMessage.qml");
    sprite = component.createObject(canvas, {"x": 250, "y": 300, "text": _message});
}
