#include "CommandParser.h"
#include "CommandFactory.h"
#include <sstream>
#include <vector>

std::unique_ptr<ICommand> CommandParser::parse(const std::string& input) {
    std::istringstream iss(input);
    std::string token;
    std::vector<std::string> tokens;

    while (iss >> token) {
        tokens.push_back(token);
    }

    if (tokens.empty()) {
        return nullptr;
    }

    std::string commandName = tokens[0];
    tokens.erase(tokens.begin());

    return CommandFactory::createCommand(commandName, tokens);
}