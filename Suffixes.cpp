#include "Suffixes.h"
#include <cstdlib>

const std::vector<std::string> Suffixes::suffixes = {"Corp", "Industries", "Solutions", "Technologies", "Labs"};

std::string Suffixes::getRandomSuffix() {
    int index = std::rand() % suffixes.size();
    return suffixes[index];
}
