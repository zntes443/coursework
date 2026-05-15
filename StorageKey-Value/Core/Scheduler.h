#pragma once
#include "DataStore.h"
#include "../Processing/CommandExecutor.h"
#include "../Network/SessionHandler.h"
#include "../Network/Listener.h"

class Scheduler {
private:
    DataStore store;
    CommandExecutor executor;
    SessionHandler session;
    Listener listener;
public:
    Scheduler();
    void run();
};