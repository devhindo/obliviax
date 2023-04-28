#include "headers/ObliviaxInfo.h"

OblivaxInfo::OblivaxInfo() {
    this->EngineName = "obliviax 1.0";
    this->author = "devhindo";
}

std::string OblivaxInfo::getEngineName() {
    return this->EngineName;
}

std::string OblivaxInfo::getAuthor() {
    return this->author;
}