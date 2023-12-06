#include "NameGenerator.h"
#include "Prefixes.h"
#include "Suffixes.h"
#include <cstdlib>
#include <ctime>

NameGenerator::NameGenerator() {
    std::srand(std::time(0)); // Seed the random number generator
}

std::string NameGenerator::generateName() {
    // Logic to combine random prefixes and suffixes
    std::string name = Prefixes::getRandomPrefix() + Suffixes::getRandomSuffix();
    return name;
}
