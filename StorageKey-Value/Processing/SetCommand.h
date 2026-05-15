#pragma once
#include "ICommand.h"
#include <string>

class SetCommand : public ICommand {
private:
    std::string key;
    std::string value;
public:
    SetCommand(std::string k, std::string v);
    std::string execute(DataStore& store) override;
};