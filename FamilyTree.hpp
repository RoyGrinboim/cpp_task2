#include <iostream>
#include <string>

namespace family{
class Tree;
}

class family::Tree
    {
        public:
            Tree(std::string name);
            int addFather(std::string son, std::string name);
            Tree* addMother(std::string son, std::string name);
            void addM(std::string son, std::string name);
            std::string relation(std::string name);
            std::string find(std::string rel);
            void display();
            void remove(std::string name);
            ~Tree();
        private:
            std::string _name;
            Tree *_mother;
            Tree *_father;
    };