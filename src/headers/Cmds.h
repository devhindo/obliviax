#include <unordered_map>
#include <string>
class Cmds {
    private:
        std::unordered_map<std::string,void(Cmds::*)()>cmdsTable;
        bool isCmd(std::string);
        void quit();
        void isready();
        void uci();
    public:
    Cmds();
    void runCmd(std::string);
};