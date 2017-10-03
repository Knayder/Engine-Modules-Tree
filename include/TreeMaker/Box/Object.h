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
            void add(Object* newObject);
            Object* get(unsigned int index);
        private:
            std::string name;

            std::vector<Object*> container;
        };
    }
}