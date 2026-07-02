#pragma once
#include <memory>
class Command;
class RemoteControl
{
private:
    std::shared_ptr<Command> command;
public:
    void SetCommand(std::shared_ptr<Command> command);
    void PressButton();
};
