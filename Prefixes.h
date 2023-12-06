#pragma once
#include <vector>
#include <string>

class Prefixes {
public:
    static std::string getRandomPrefix();

private:
    static const std::vector<std::string> prefixes;
};
