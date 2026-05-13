#pragma once
#include <string>

class IValue {
public:
    virtual ~IValue() = default;
    virtual std::string toString() const = 0;
};