#include <TreeMaker/Box/Object.h>

namespace tree{
    namespace box{
        Object::Object(std::string& name) : 
            name(name),
            size(1u)
        {

        }

        Object::~Object(){
            for(auto& it : container)
                delete it;
        }

        bool Object::isEmpty(){
            return container.empty();
        }

        unsigned int Object::elements(){
            return container.size();
        }

        unsigned int Object::totalSize(){
            if(isEmpty())
                return 1;
            unsigned int sum{0};
            for(auto& it : container)
                sum += it->totalSize();
            return sum;
        }

        Object* Object::add(Object* newObject){
            container.push_back(newObject);
            return newObject;
        }

        Object* Object::get(unsigned int index){
            if(index < container.size())
                return container[index];
            return nullptr;
        }

        std::string Object::getName(){
            return name;
        }

        void Object::setSize(unsigned int newSize){
            size = newSize;
        }

        void Object::addSize(unsigned int toAddSize){
            size += toAddSize;
        }

        unsigned int Object::getSize(){
            return size;
        }

    }
}