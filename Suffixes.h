#pragma once
#include <vector>
#include <string>

class Suffixes {
public:
    static std::string getRandomSuffix();

private:
    static const std::vector<std::string> suffixes;
};
