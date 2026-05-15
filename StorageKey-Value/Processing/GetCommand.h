#pragma once
#include "ICommand.h"
#include <string>

class GetCommand : public ICommand {
private:
    std::string key;
public:
    explicit GetCommand(std::string k);
    std::string execute(DataStore& store) override;
};