#pragma once
#include "ICommand.h"
#include <string>
#include <memory>

class CommandParser {
public:
    std::unique_ptr<ICommand> parse(const std::string& input);
};