#include "CommandExecutor.h"

CommandExecutor::CommandExecutor(DataStore& s) : store(s) {}

std::string CommandExecutor::execute(const std::string& input) {
    std::unique_ptr<ICommand> command = parser.parse(input);
    if (command) {
        return command->execute(store);
    }
    return "(error) ERR unknown command or wrong number of arguments";
}