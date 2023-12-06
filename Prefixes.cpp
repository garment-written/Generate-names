#include "Prefixes.h"
#include <cstdlib>

const std::vector<std::string> Prefixes::prefixes = {"Alpha", "Beta", "Gamma", "Delta", "Epsilon"};

std::string Prefixes::getRandomPrefix() {
    int index = std::rand() % prefixes.size();
    return prefixes[index];
}
