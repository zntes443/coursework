#pragma once
#include "ICommand.h"
#include <string>
#include <vector>
#include <memory>

class CommandFactory {
public:
    static std::unique_ptr<ICommand> createCommand(const std::string& name, const std::vector<std::string>& args);
};