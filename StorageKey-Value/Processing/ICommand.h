#pragma once
#include <string>
#include "../Core/DataStore.h"

class ICommand {
public:
    virtual ~ICommand() = default;
    virtual std::string execute(DataStore& store) = 0;
};