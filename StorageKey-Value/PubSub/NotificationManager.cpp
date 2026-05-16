#include "NotificationManager.h"
#include <algorithm>

void NotificationManager::subscribe(ISubscriber* sub) {
    subscribers.push_back(sub);
}

void NotificationManager::unsubscribe(ISubscriber* sub) {
    auto it = std::find(subscribers.begin(), subscribers.end(), sub);
    if (it != subscribers.end()) {
        subscribers.erase(it);
    }
}

void NotificationManager::notifyAll(const std::string& message) {
    for (auto* sub : subscribers) {
        sub->update(message);
    }
}