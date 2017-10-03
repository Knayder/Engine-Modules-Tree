#include <TreeMaker/Box/Object.h>

namespace tree{
    namespace box{
        Object::Object(std::string& name) : 
            name(name)
        {

        }

        Object::~Object(){
            for(auto& it : container)
                delete it;
        }

        bool Object::isEmpty(){
            return container.empty();
        }

        void Object::add(Object* newObject){
            container.push_back(newObject);
        }

        Object* Object::get(unsigned int index){
            if(index < container.size())
                return container[index];
            return nullptr;
        }


    }
}