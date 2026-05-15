#pragma once
#include <string>
#include "../Core/DataStore.h"
#include "CommandParser.h"

class CommandExecutor {
private:
    DataStore& store;
    CommandParser parser;
public:
    explicit CommandExecutor(DataStore& s);
    std::string execute(const std::string& input);
};