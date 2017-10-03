#pragma once
#include <fstream>
#include <string>
#include <SFML/Network.hpp>

namespace tree{
    class File {
    public:
        File(const char* fileName);
        std::string getText();
    private:
        std::ifstream file;
        std::string content;
    };
}