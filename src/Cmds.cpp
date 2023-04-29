#include <iostream>
#include "headers/Cmds.h"
#include "headers/ObliviaxInfo.h"

void Cmds::uci(std::vector<std::string>& cmd) {
    OblivaxInfo obliviax;
    std::cout << "id name " << obliviax.getEngineName() << std::endl; 
    std::cout << "id author " << obliviax.getAuthor() << std::endl; 
    std::cout << "uciok" << std::endl;
}

void Cmds::quit(std::vector<std::string>& cmd) {
    exit(0);
}

void Cmds::position(std::vector<std::string>& cmd) {
    std::string s = "test command";
}

void Cmds::ucinewgame(std::vector<std::string>& cmd) {
    // new game initialized
}

Cmds::Cmds() {
    cmdsTable["quit"] = &Cmds::quit;
    cmdsTable["isready"] = &Cmds::isready;
    cmdsTable["setoption"] = &Cmds::isready;
    cmdsTable["uci"] = &Cmds::uci;
    cmdsTable["position"] = &Cmds::position;
}

void Cmds::isready(std::vector<std::string>& cmd) {
    std::cout << "readyok" << std::endl;
}

bool Cmds::isCmd(std::string& cmd) {
    if(cmdsTable.find(cmd) == cmdsTable.end()) {
        std::cout << "invalid command!" << std::endl;
        return false;
    }
    return true;
}

void Cmds::runCmd(std::vector<std::string>& cmd) {
    if(isCmd(cmd[0])) {
        auto fun = cmdsTable.find(cmd[0]);
        (this->*fun->second)(cmd);
    }
}