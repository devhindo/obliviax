#include <unordered_map>
#include <string>
class Cmds {
    private:
        std::unordered_map<std::string,void(Cmds::*)()>cmdsTable;
        bool isCmd(std::string);
        void quit();
        void isready();
    public:
    Cmds();
    void runCmd(std::string);
};