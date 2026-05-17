#include "DataStore.h"

void DataStore::setNotifier(NotificationManager* notif) {
    notifier = notif;
}

void DataStore::set(const std::string& key, std::unique_ptr<IValue> value) {
    storage[key] = std::move(value);
    if (notifier) {
        notifier->notifyAll("SET " + key);
    }
}

IValue* DataStore::get(const std::string& key) {
    auto it = storage.find(key);
    if (it != storage.end()) {
        return it->second.get();
    }
    return nullptr;
}

bool DataStore::remove(const std::string& key) {
    bool erased = storage.erase(key) > 0;
    if (erased && notifier) {
        notifier->notifyAll("DELETE " + key);
    }
    return erased;
}

size_t DataStore::getSize() const {
    return storage.size();
}