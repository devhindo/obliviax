#include <iostream>
#include "Cmds.h"

void Cmds::quit() {
    exit(0);
}

Cmds::Cmds() {
    cmdsTable["quit"] = &Cmds::quit;
}

bool Cmds::isCmd(std::string cmd) {
    if(cmdsTable.find(cmd) == cmdsTable.end()) {
        std::cout << "invalid command!" << std::endl;
        return false;
    }
    return true;
}

void Cmds::runCmd(std::string cmd) {
    if(isCmd(cmd)) {
        auto fun = cmdsTable.find(cmd);
        (this->*fun->second)();
    }
}