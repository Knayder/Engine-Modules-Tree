#pragma once
#include <fstream>
#include <string>
#include <TreeMaker/Box/Object.h>

namespace tree{
    class File {
    public:
        File(const char* fileName);
        ~File();

        box::Object* fill(box::Object* tree);
    private:
        std::ifstream file;
    };
}