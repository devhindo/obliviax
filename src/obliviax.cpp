#include "board.h"
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void quit() {
    exit(0);
}

std::unordered_map<std::string,void(*)()>cmds = {
    {"quit", quit}
};


int main() {
    while(true) {
        std::string cmd;
        cin >> cmd;
        if(cmds.find(cmd) == cmds.end()) {
            cout << "Invalid command" << endl;
        } else {
            cmds[cmd]();
        }
    }
}
