#include "SessionHandler.h"

SessionHandler::SessionHandler(CommandExecutor& exec) : executor(exec) {}

std::string SessionHandler::handleInput(const std::string& input) {
    return executor.execute(input);
}