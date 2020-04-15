#include <iostream>

namespace family
{
    class Node
    {
        private:
            std::string name;
            Node *mother;
            Node *father;
        public:
            Node(std::string name);
            void addFather(std::string name);
            void addMother(std::string name);
            ~Node();
            

    };
    
    class Tree
    {
        private:
            Node *root;
        public:
            Tree(std::string name);
            Tree addFather(std::string son, std::string name);
            Tree addMother(std::string son, std::string name);
            std::string relation(std::string name);
            std::string find(std::string rel);
            void display();
            void remove(std::string name);
            ~Tree();
    };
}