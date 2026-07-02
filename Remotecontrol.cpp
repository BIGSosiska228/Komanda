#include "RemoteControl.h"
#include "Command.h"

void RemoteControl::SetCommand(std::shared_ptr<Command> command)
{
    this->command = command;
}

void RemoteControl::PressButton()
{
    if (command)
    {
        command->Execute();
    }
}
