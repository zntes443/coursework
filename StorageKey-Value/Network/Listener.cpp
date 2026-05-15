#include "Listener.h"
#include <iostream>
#include <string>

Listener::Listener(SessionHandler& sess) : session(sess) {}

void Listener::listen() {
    std::string input;
    while (true) {
        std::cout << "> ";
        if (!std::getline(std::cin, input)) {
            break;
        }
        if (input == "EXIT" || input == "QUIT") {
            break;
        }
        if (input.empty()) {
            continue;
        }
        std::string response = session.handleInput(input);
        std::cout << response << std::endl;
    }
}