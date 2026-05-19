#include "MemoryManager.h"

MemoryManager::MemoryManager(size_t limit) : maxItems(limit) {}

bool MemoryManager::isLimitReached(size_t currentCount) const {
    return currentCount > maxItems;
}