#include "DeleteCommand.h"

DeleteCommand::DeleteCommand(std::string k) : key(std::move(k)) {}

std::string DeleteCommand::execute(DataStore& store) {
    if (store.remove(key)) {
        return "(integer) 1";
    }
    return "(integer) 0";
}