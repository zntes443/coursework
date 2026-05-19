#pragma once
#include <unordered_map>
#include <string>
#include <memory>
#include "IValue.h"
#include "../PubSub/NotificationManager.h"

class DataStore {
private:
    std::unordered_map<std::string, std::unique_ptr<IValue>> storage;
    NotificationManager* notifier = nullptr;

public:
    void setNotifier(NotificationManager* notif);
    void set(const std::string& key, std::unique_ptr<IValue> value);
    IValue* get(const std::string& key);
    bool remove(const std::string& key);
    void clear();
    size_t getSize() const;
};