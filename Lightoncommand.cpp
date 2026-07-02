#include "LightOnCommand.h"
#include "Light.h"

LightOnCommand::LightOnCommand(Light* light) : light(light) {}

void LightOnCommand::Execute()
{
    light->On();
}
