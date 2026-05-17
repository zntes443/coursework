#include "SnapshotArchiver.h"
#include <iostream>

void SnapshotArchiver::update(const std::string& message) {
    std::cout << "[Archiver] Appended to AOF log: " << message << std::endl;
}