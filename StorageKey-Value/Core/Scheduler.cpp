#include "Scheduler.h"
#include <iostream>

Scheduler::Scheduler()
    : notifier(),
    archiver(),
    synchronizer(),
    store(),
    executor(store),
    session(executor),
    listener(session) {

    notifier.subscribe(&archiver);
    notifier.subscribe(&synchronizer);
    store.setNotifier(&notifier);
}

void Scheduler::run() {
    std::cout << "--- StorageKey-Value ---" << std::endl;
    std::cout << "Type EXIT or QUIT to stop." << std::endl;
    listener.listen();
    std::cout << "Server stopped." << std::endl;
}