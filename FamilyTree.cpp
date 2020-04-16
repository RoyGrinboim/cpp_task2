#include <iostream>
#include "FamilyTree.hpp"

namespace family
{
class Tree
    {
        private:
            std::string _name;
            Tree *_mother;
            Tree *_father;
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
                        _father->addFather(son, name);
                    }
                    if(_mother != NULL)
                    {
                        _mother->addFather(son, name);
                    }
                return 2; // no one has the same name as son
            }
            int addMother(std::string son, std::string name)
            {
                if(son == _name)
                {
                    if(_mother == NULL)
                    {
                        _mother = new Tree(name);
                        return 0;// every thing went OK
                    }
                    return 1; // already has father
                }
                    if(_father != NULL)
                    {
                        _father->addMother(son, name);
                    }
                    if(_mother != NULL)
                    {
                        _mother->addMother(son, name);
                    }
                return 2; // no one has the same name as son
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
    };
}