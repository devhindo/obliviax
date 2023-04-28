#include "headers/Toolkit.h"

std::vector<std::string> Toolkit::split(std::string& cmd) {
    std::vector<std::string>words;
    std::istringstream iss(cmd);
    std::string word;
    while(iss >> word) {
        words.push_back(word);
    }
    return words;
}