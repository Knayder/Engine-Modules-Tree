#pragma once
#include <fstream>
#include <string>
#include <SFML/Network.hpp>
#include <TreeMaker/Box/Object.h>

namespace tree{
    class File {
    public:
        File(const char* fileName);

        void fill(box::Object* tree);
    private:
        std::ifstream file;
        std::string content;
    };
}