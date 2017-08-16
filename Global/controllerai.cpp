#include "controllerai.h"

ControllerAI::ControllerAI(GameEngine *_engine)
{
    if (_engine != nullptr)
    {
        engine = _engine;
    }
}
