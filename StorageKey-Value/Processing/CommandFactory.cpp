#include "CommandFactory.h"
#include "SetCommand.h"
#include "GetCommand.h"
#include "DeleteCommand.h"
#include <cctype>

std::unique_ptr<ICommand> CommandFactory::createCommand(const std::string& name, const std::vector<std::string>& args) {
    std::string upperName = name;
    for (char& c : upperName) {
        c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
    }

    if (upperName == "SET" && args.size() >= 2) {
        return std::make_unique<SetCommand>(args[0], args[1]);
    }
    if (upperName == "GET" && args.size() >= 1) {
        return std::make_unique<GetCommand>(args[0]);
    }
    if (upperName == "DELETE" && args.size() >= 1) {
        return std::make_unique<DeleteCommand>(args[0]);
    }

    return nullptr;
}