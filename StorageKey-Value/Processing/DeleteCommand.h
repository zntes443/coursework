#pragma once
#include "ICommand.h"
#include <string>

class DeleteCommand : public ICommand {
private:
    std::string key;
public:
    explicit DeleteCommand(std::string k);
    std::string execute(DataStore& store) override;
};