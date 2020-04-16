#include <iostream>

namespace family
{
class Tree{};
class Tree
    {
        private:
            std::string _name;
            family::Tree _mother;
            family::Tree _father;
        public:
            Tree(std::string name);
            int addFather(std::string son, std::string name);
            int addMother(std::string son, std::string name);
            std::string relation(std::string name);
            std::string find(std::string rel);
            void display();
            void remove(std::string name);
            ~Tree();
    };
}