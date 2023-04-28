#include <iostream>
#include "headers/board.h"
#include "headers/Cmds.h"

int main() {
    while(true) {
        std::string cmd;
        std::cin >> cmd;
        Cmds cmds;
        cmds.runCmd(cmd);
    }
}
