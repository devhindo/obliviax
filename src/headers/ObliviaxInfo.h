#include <string>

class OblivaxInfo {
    private:
        std::string EngineName;
        std::string author;
    public:
        OblivaxInfo();
        std::string getEngineName();
        std::string getAuthor();
};