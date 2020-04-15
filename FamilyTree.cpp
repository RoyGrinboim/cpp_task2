#include "FamilyTree.hpp"
#include <iostream>

using namespace std;
namespace family
{
    class Node
    {
        private:
            string _name;
            Node *_mother;
            Node *_father;
        public:
            Node(string name)
            {
                _name = name;
            }
            void addFather(string name)
            {
                Node *f = new Node(name);
                _father = f;
            }
            void addMother(string name)
            {
                Node *m = new Node(name);
                _mother = m;
            }
            ~Node()
            {
                delete(_father);
                delete(_mother);
            }
    };

    class Tree
    {
        private:
            Node *_root;
        public:
            Tree(string name)
            {
                _root = new Node(name);
            }
            Tree addFather(string son, string name)
            {
               return *this; 
            }
            Tree addMother(string son, string name)
            {
                return *this;
            }
            string relation(string name)
            {
                return "name";
            }
            string find(string rel)
            {
                return "name";
            }
            void display()
            {

            }
            void remove(string name)
            {

            }
            ~Tree()
            {
                delete(_root);
            }
    };
}