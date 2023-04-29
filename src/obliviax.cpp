#include <iostream>
#include "headers/board.h"
#include "headers/Cmds.h"
#include "headers/Toolkit.h"

int main() {
    while(true) {
        std::string cmd;
        std::getline(std::cin,cmd);
        std::vector<std::string>tokens = Toolkit::split(cmd);
        Cmds cmds;
        cmds.runCmd(tokens);
    }
}
