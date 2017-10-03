#include <TreeMaker/Application.h>


namespace tree{
    Application::Application() :
        file("input.txt")
    {

    }

    Application::~Application(){
        delete tree;
    }


    void Application::init(){
        file.fill(tree);
    }
}