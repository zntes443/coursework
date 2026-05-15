#include "GetCommand.h"

GetCommand::GetCommand(std::string k) : key(std::move(k)) {}

std::string GetCommand::execute(DataStore& store) {
    IValue* val = store.get(key);
    if (val) {
        return val->toString();
    }
    return "(nil)";
}