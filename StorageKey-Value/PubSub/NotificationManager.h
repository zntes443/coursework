#pragma once
#include <vector>
#include <string>
#include "ISubscriber.h"

class NotificationManager {
private:
    std::vector<ISubscriber*> subscribers;
public:
    void subscribe(ISubscriber* sub);
    void unsubscribe(ISubscriber* sub);
    void notifyAll(const std::string& message);
};