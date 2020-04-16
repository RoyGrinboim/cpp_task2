#include <iostream>
#include <string>
#include "FamilyTree.hpp"

namespace family{
class Tree;
}

class family::Tree
    {
        public:
            Tree(std::string name)
            {
                _name = name;
                _mother = NULL;
                _father = NULL;
            }
            std::string getName()
            {
                return _name;
            }
            int addFather(std::string son, std::string name)
            {
                if(son == _name)
                {
                    if(_father == NULL)
                    {
                        _father = new Tree(name);
                        return 0;// every thing went OK
                    }
                    return 1; // already has father
                }
                    if(_father != NULL)
                    {
                        return _father->addFather(son, name);
                    }
                    if(_mother != NULL)
                    {
                        return _mother->addFather(son, name);
                    }
                return 2; // no one has the same name as son
            }
            Tree* addMother(std::string son, std::string name)
            {
                this->addM(son, name);
                return this;
            }
            void addM(std::string son, std::string name)
            {
                if(son == _name)
                {
                    if(_mother == NULL)
                    {
                        _mother = new Tree(name);
                        return;// every thing went OK
                    }
                    return; // already has father
                }
                    if(_father != NULL)
                    {
                        return _father->addM(son, name);
                    }
                    if(_mother != NULL)
                    {
                        return _mother->addM(son, name);
                    }
                return; // no one has the same name as son
            }
            std::string relation(std::string name)
            {
                return "";
            }
            std::string find(std::string rel)
            {
                return "";
            }
            void display()
            {

            }
            void remove(std::string name)
            {

            }
            ~Tree()
            {
                
            }
        private:
            std::string _name;
            Tree *_mother;
            Tree *_father;
    };
