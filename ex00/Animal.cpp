#include "Animal.hpp"

Animal::Animal()
{
    _type = "Unamed";
    std::cout << "Simple constructeur Animal check !" << std::endl;
}

Animal::Animal(const std::string& type)
{
    _type = type;
    std::cout << "Constructeur string Animal check !" << std::endl;
}

Animal::Animal(const Animal& copie)
{
    std::cout << "Constructeur copie Animal check !" << std::endl;
    _type = copie._type;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {   
        _type = other._type;
        std::cout << "Constructeur Animal operator check !" << std::endl;
    }
    return *this;
}

Animal::~Animal()
{
        std::cout << "Destructor Animal check !" << std::endl;
}

std::string const &Animal::getType() const
{
    return _type;
}

 void Animal::makeSound() const
{
    std::cout << _type << " : Grrrrrr "<< std::endl; 
}

