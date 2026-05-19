#pragma once

class MemoryManager {
private:
    size_t maxItems;
public:
    explicit MemoryManager(size_t limit = 3);
    bool isLimitReached(size_t currentCount) const;
};