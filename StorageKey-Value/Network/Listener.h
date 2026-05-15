#pragma once
#include "SessionHandler.h"

class Listener {
private:
    SessionHandler& session;
public:
    explicit Listener(SessionHandler& sess);
    void listen();
};