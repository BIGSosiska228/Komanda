#pragma once
#include "Command.h"
class Light;
class LightOffCommand : public Command
{
private:
    Light* light;
public:
    LightOffCommand(Light* light);
    void Execute() override;
};
