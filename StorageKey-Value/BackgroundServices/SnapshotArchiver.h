#pragma once
#include "../PubSub/ISubscriber.h"
#include <string>

class SnapshotArchiver : public ISubscriber {
public:
    void update(const std::string& message) override;
};