#include "LightOffCommand.h"
#include "Light.h"

LightOffCommand::LightOffCommand(Light* light) : light(light) {}

void LightOffCommand::Execute()
{
    light->Off();
}
