#pragma once
#include <vector>

namespace tree{
    namespace box{
        class Object {
        public:
            Object();
            ~Object();

            bool isEmpty();
            void add(Object* newObject);
            Object* get(unsigned int index);
        private:
            std::vector<Object*> container;
        };
    }
}