#include "DataStore.h"

void DataStore::set(const std::string& key, std::unique_ptr<IValue> value) {
    storage[key] = std::move(value);
}

IValue* DataStore::get(const std::string& key) {
    auto it = storage.find(key);
    if (it != storage.end()) {
        return it->second.get();
    }
    return nullptr;
}

bool DataStore::remove(const std::string& key) {
    return storage.erase(key) > 0;
}