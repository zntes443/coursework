#pragma once
#include <string>

class ISubscriber {
public:
    virtual ~ISubscriber() = default;
    virtual void update(const std::string& message) = 0;
};