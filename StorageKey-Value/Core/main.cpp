#include <iostream>
#include <memory>
#include "DataStore.h"
#include "StringValue.h"

int main() {
    std::cout << "--- StorageKey-Value Server Starting ---" << std::endl;

    DataStore ds;

    ds.set("mykey", std::make_unique<StringValue>("Hello!"));

    IValue* val = ds.get("mykey");

    if (val) {
        std::cout << "Data in store: " << val->toString() << std::endl;
    }
    else {
        std::cout << "Key not found." << std::endl;
    }

    std::cout << "----------------------------------------" << std::endl;

    return 0;
}