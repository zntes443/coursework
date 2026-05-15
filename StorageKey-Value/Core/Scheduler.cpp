#include "Scheduler.h"
#include <iostream>

Scheduler::Scheduler()
    : store(),
    executor(store),
    session(executor),
    listener(session) {}

void Scheduler::run() {
    std::cout << "--- StorageKey-Value Server Interactive Mode ---" << std::endl;
    std::cout << "Type EXIT or QUIT to stop." << std::endl;
    listener.listen();
    std::cout << "Server stopped." << std::endl;
}