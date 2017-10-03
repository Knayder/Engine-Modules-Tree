#pragma once
#include <TreeMaker/File.h>
#include <TreeMaker/Box/Object.h>

namespace tree{
    class Application{
    public:
        Application();
        void init();
    private:
        
        File file;
    };
}