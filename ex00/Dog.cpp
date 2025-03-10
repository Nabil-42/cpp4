#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    _type = "Dog";
    std::cout << "Simple constructeur Dog check !" << std::endl;
}

Dog::Dog(const std::string& type) : Animal(type)
{
    std::cout << "Constructeur DOG string check !" << std::endl;
}

Dog::Dog(const Dog& copie) : Animal(copie)
{
    std::cout << "Constructeur DOG copie check !" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {   
        _type = other._type;
        std::cout << "Constructeur Dog operator check !" << std::endl;
    }
    return *this;
}

Dog::~Dog()
{
        std::cout << "Destructor Dog check !" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << _type << " : Waouf "<< std::endl; 
}