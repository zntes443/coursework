#include <iostream>
#include <string>
#include "DataStore.h"
#include "../Processing/CommandExecutor.h"

int main() {
    std::cout << "--- StorageKey-Value ---" << std::endl;

    DataStore ds;
    CommandExecutor executor(ds);

    std::cout << "> SET user1 admin" << std::endl;
    std::cout << executor.execute("SET user1 admin") << std::endl;

    std::cout << "> GET user1" << std::endl;
    std::cout << executor.execute("GET user1") << std::endl;

    std::cout << "> GET user2" << std::endl;
    std::cout << executor.execute("GET user2") << std::endl;

    std::cout << "> DELETE user1" << std::endl;
    std::cout << executor.execute("DELETE user1") << std::endl;

    std::cout << "----------------------------------------" << std::endl;

    return 0;
}