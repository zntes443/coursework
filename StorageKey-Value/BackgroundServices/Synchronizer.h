#pragma once
#include "../PubSub/ISubscriber.h"
#include <string>

class Synchronizer : public ISubscriber {
public:
    void update(const std::string& message) override;
};