#pragma once
#include <vector>
#include <string>

namespace tree{
    namespace box{
        class Object {
        public:
            Object(std::string& name);
            ~Object();
            bool isEmpty();
            Object* add(Object* newObject);
            Object* get(unsigned int index);

            unsigned int elements();

            unsigned int totalSize();

            std::string getName();

            void setSize(unsigned int newSize);
            void addSize(unsigned int toAdd);
            unsigned int getSize();
        private:
            std::string name;
            unsigned int size;
            std::vector<Object*> container;
        };
    }
}