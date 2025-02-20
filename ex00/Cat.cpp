#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
     _type = "Cat";
    std::cout << "Simple constructeur Cat check !" << std::endl;
}

Cat::Cat(const std::string& type) : Animal(type)
{
    std::cout << "Constructeur CAT string check !" << std::endl;
}

Cat::Cat(const Cat& copie) : Animal(copie)
{
    std::cout << "Constructeur CAT copie check !" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {   
        _type = other._type;
        std::cout << "Constructeur Cat operator check !" << std::endl;
    }
    return *this;
}

Cat::~Cat()
{
        std::cout << "Destructor Cat check !" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << _type << " : Miaou "<< std::endl; 
}