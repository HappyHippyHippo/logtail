#include <iostream>
#include <string>

#include "nlohmann/json.hpp"

using json = nlohmann::json;

int main() {
    for (std::string line; std::getline(std::cin, line);) {
        std::cout << json::parse(line).dump(4) << std::endl;
    }
    return 0;
}
