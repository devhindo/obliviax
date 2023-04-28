#include <unordered_map>
#include <string>
class Cmds {
    private:
        std::unordered_map<std::string,void(Cmds::*)()>cmdsTable;
        bool isCmd(std::string);
    public:
    Cmds();
    void quit();
    void runCmd(std::string);
};