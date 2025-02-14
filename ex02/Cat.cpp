#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat")
{
    cerveau = new Brain;
     _type = "Cat";
    std::cout << "Simple constructeur Cat check !" << std::endl;
}

Cat::Cat(const std::string& type) : Animal(type)
{
    cerveau = new Brain;
    _type = type;
    std::cout << "Constructeurcheck !" << std::endl;
}

Cat::Cat(const Cat& copie) : Animal(copie)
{
    cerveau = copie.cerveau;
    _type = copie._type;
}
Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {   
        cerveau = other.cerveau;
        _type = other._type;
        std::cout << "Constructeur Cat operator check !" << std::endl;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destructor Cat check !" << std::endl;
    delete(cerveau);
}

void Cat::makeSound() const
{
    std::cout << _type << " : Miaou "<< std::endl; 
}