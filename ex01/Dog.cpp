#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    cerveau = new Brain;
    std::cout << "Simple constructeur Dog check !" << std::endl;
}

Dog::Dog(const std::string& type) : Animal(type)
{
    cerveau = new Brain;
    std::cout << "Constructeur DOG string check !" << std::endl;
}

Dog::Dog(const Dog& copie) : Animal(copie)
{
    cerveau = new Brain(*copie.cerveau);
    std::cout << "Constructeur DOG copie check !" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {   
        if (cerveau)
            delete cerveau;
        cerveau = new Brain(*other.cerveau);
        _type = other._type;
        std::cout << "Constructeur Dog operator check !" << std::endl;
    }
    return *this;
}

Dog::~Dog()
{
        if (cerveau)
            delete cerveau;
        std::cout << "Destructor Dog check !" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << _type << " : Waouf "<< std::endl; 
}