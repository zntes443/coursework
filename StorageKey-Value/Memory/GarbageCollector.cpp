#include "GarbageCollector.h"
#include <iostream>

GarbageCollector::GarbageCollector(DataStore& s, MemoryManager m) : store(s), memory(m) {}

void GarbageCollector::update(const std::string& message) {
    if (message.find("SET") == 0) {
        if (memory.isLimitReached(store.getSize())) {
            std::cout << "[GarbageCollector] Memory limit reached! Cleaning up data..." << std::endl;
            store.clear();
        }
    }
}