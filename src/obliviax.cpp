#include <iostream>
#include "board.h"
#include "Cmds.h"

int main() {
    while(true) {
        std::string cmd;
        std::cin >> cmd;
        Cmds cmds;
        cmds.runCmd(cmd);
    }
}
