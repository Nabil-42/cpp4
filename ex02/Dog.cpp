#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    cerveau = new Brain;
    _type = "Dog";
    std::cout << "Simple constructeur Dog check !" << std::endl;
}

Dog::Dog(const std::string& type) : Animal("Dog")
{
    cerveau = new Brain;
    _type = type;
    std::cout << "Constructeurcheck !" << std::endl;
}

Dog::Dog(const Dog& copie) : Animal(copie)
{
    cerveau = copie.cerveau;
    _type = copie._type;
}
Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {   
        cerveau = other.cerveau;
        _type = other._type;
        std::cout << "Constructeur Dog operator check !" << std::endl;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destructor Dog check !" << std::endl;
    delete(cerveau);
}

void Dog::makeSound() const
{
    std::cout << _type << " : Waouf "<< std::endl; 
}