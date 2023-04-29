#include <unordered_map>
#include <string>
#include <vector>
class Cmds {
    private:
        std::unordered_map<std::string,void(Cmds::*)(std::vector<std::string>&)>cmdsTable;
        bool isCmd(std::string&);
        void quit(std::vector<std::string>&);
        void isready(std::vector<std::string>&);
        void uci(std::vector<std::string>&);
        void position(std::vector<std::string>&);
        void ucinewgame(std::vector<std::string>&);
    public:
    Cmds();
    void runCmd(std::vector<std::string>&);
};