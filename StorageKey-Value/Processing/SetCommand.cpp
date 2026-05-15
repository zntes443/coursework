#include "SetCommand.h"
#include "../Core/StringValue.h"
#include <memory>

SetCommand::SetCommand(std::string k, std::string v) : key(std::move(k)), value(std::move(v)) {}

std::string SetCommand::execute(DataStore& store) {
    store.set(key, std::make_unique<StringValue>(value));
    return "OK";
}