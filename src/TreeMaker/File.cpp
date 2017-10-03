#include <TreeMaker/File.h>
#include <iostream>
namespace tree{
    File::File(const char* fileName){
        file.open(fileName);
        file >> content;
        file.close();
    }

    std::string File::getText(){

    }
}