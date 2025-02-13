#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
     _type = "Cat";
    std::cout << "Simple constructeur Cat check !" << std::endl;
}

Cat::Cat(const std::string& type) : Animal(type)
{
    _type = type;
    std::cout << "Constructeurcheck !" << std::endl;
}

Cat::Cat(const Cat& copie)
{
    _type = copie._type;
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