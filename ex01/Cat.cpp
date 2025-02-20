#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    cerveau = new Brain;
    std::cout << "Simple constructeur Cat check !" << std::endl;
}

Cat::Cat(const std::string& type) : Animal(type)
{
    cerveau = new Brain;
    std::cout << "Constructeur CAT string check !" << std::endl;
}

Cat::Cat(const Cat& copie) : Animal(copie)
{
    cerveau = new Brain(*copie.cerveau);
    std::cout << "Constructeur CAT copie check !" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {   
        if (cerveau)
            delete cerveau;
        cerveau = new Brain(*other.cerveau);
        _type = other._type;
        std::cout << "Constructeur Cat operator check !" << std::endl;
    }
    return *this;
}

Cat::~Cat()
{
        if (cerveau)
            delete cerveau;
        std::cout << "Destructor Cat check !" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << _type << " : Miaou "<< std::endl; 
}