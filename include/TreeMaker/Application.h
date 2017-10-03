#pragma once
#include <TreeMaker/File.h>
#include <TreeMaker/Box/Object.h>

namespace tree{
    class Application{
    public:
        Application();
        ~Application();
        void init();
    private:
        box::Object* tree;
        File file;
    };
}