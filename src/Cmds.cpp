#include <iostream>
#include "headers/Cmds.h"
#include "headers/ObliviaxInfo.h"

void Cmds::uci() {
    OblivaxInfo obliviax;
    std::cout << "id name " << obliviax.getEngineName() << std::endl; 
    std::cout << "id author " << obliviax.getAuthor() << std::endl; 
    std::cout << "uciok" << std::endl;
}

void Cmds::quit() {
    exit(0);
}

Cmds::Cmds() {
    cmdsTable["quit"] = &Cmds::quit;
    cmdsTable["isready"] = &Cmds::isready;
    cmdsTable["setoption"] = &Cmds::isready;
    cmdsTable["uci"] = &Cmds::uci;
}

void Cmds::isready() {
    // init engine;
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