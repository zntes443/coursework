#pragma once
#include "IValue.h"

class StringValue : public IValue {
private:
    std::string data;
public:
    explicit StringValue(std::string val) : data(std::move(val)) {}
    std::string toString() const override {
        return data;
    }
};