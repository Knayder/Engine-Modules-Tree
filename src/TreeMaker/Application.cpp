#include <TreeMaker/Application.h>
#include <iostream>

namespace tree{
    Application::Application() :
        file("input.txt"),
        tree(nullptr)
    {

    }

    Application::~Application(){
        delete tree;
    }


    void Application::init(){
        std::string name = "Engine";
        tree = file.fill(new box::Object(name));
        std::cout << tree->get(0)->get(1)->get(0)->totalSize() << std::endl;
    }
}