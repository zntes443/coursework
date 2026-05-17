#pragma once
#include "DataStore.h"
#include "../Processing/CommandExecutor.h"
#include "../Network/SessionHandler.h"
#include "../Network/Listener.h"
#include "../PubSub/NotificationManager.h"
#include "../BackgroundServices/SnapshotArchiver.h"
#include "../BackgroundServices/Synchronizer.h"

class Scheduler {
private:
    NotificationManager notifier;
    SnapshotArchiver archiver;
    Synchronizer synchronizer;
    DataStore store;
    CommandExecutor executor;
    SessionHandler session;
    Listener listener;
public:
    Scheduler();
    void run();
};