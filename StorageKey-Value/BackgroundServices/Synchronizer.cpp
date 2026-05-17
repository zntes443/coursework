#include "Synchronizer.h"
#include <iostream>

void Synchronizer::update(const std::string& message) {
    std::cout << "[Synchronizer] Replicating to slaves: " << message << std::endl;
}