#include <TreeMaker/File.h>
#include <iostream>
namespace tree{
    File::File(const char* fileName){
        file.open(fileName);
        file >> content;
        file.close();
    }

    void File::fill(box::Object* tree){
        
    }
}