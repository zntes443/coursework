#pragma once
#include "../PubSub/ISubscriber.h"
#include "../Core/DataStore.h"
#include "MemoryManager.h"
#include <string>

class GarbageCollector : public ISubscriber {
private:
    DataStore& store;
    MemoryManager memory;
public:
    GarbageCollector(DataStore& s, MemoryManager m);
    void update(const std::string& message) override;
};