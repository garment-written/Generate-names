#include <iostream>
#include "NameGenerator.h"

int main() {
    NameGenerator nameGenerator;
    for (int i = 0; i < 10; ++i) {
        std::cout << "Generated Name: " << nameGenerator.generateName() << std::endl;
    }
    return 0;
}
