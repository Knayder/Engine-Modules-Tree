#include <TreeMaker/File.h>
#include <iostream>
#include <stack>

namespace tree{
    File::File(const char* fileName){
        file.open(fileName);
    }
    File::~File(){
        file.close();
    }

    box::Object* File::fill(box::Object* tree){
        std::string temp;
        std::stack<box::Object*> current;
        current.push(tree);
        while(file >> temp){
            if(temp=="{"){

            }
            else if(temp == "}"){
                current.top()->addSize(current.top()->totalSize());
                current.pop();
            }
            else{
                current.push(current.top()->add(new box::Object(temp)));
            }
        }

        return tree;
    }
}