#pragma once
#include <string>
#include "../Processing/CommandExecutor.h"

class SessionHandler {
private:
    CommandExecutor& executor;
public:
    explicit SessionHandler(CommandExecutor& exec);
    std::string handleInput(const std::string& input);
};