#include "Brain.hpp"

Brain::Brain()
{
    _type = "Brain";
    std::cout << "Simple constructeur Brain check !" << std::endl;
}

Brain::Brain(const std::string& type)
{
    _type = type;
    std::cout << "Constructeurcheck !" << std::endl;
}

Brain::Brain(const Brain& copie)
{
    _type = copie._type;
}
Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {   
        _type = other._type;
        std::cout << "Constructeur Brain operator check !" << std::endl;
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destructor Brain check !" << std::endl;
}