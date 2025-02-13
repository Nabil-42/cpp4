#include "WrongAnimal.hpp"

wrongAnimal::wrongAnimal()
{
    _type = "Unamed";
    std::cout << "Simple constructeur wrongAnimal check !" << std::endl;
}

wrongAnimal::wrongAnimal(const std::string& type)
{
    _type = type;
    std::cout << "Constructeur wrongAnimal check !" << std::endl;
}

wrongAnimal::wrongAnimal(const wrongAnimal& copie)
{
    _type = copie._type;
}

wrongAnimal& wrongAnimal::operator=(const wrongAnimal& other)
{
    if (this != &other)
    {   
        _type = other._type;
        std::cout << "Constructeur wrongAnimal operator check !" << std::endl;
    }
    return *this;
}

wrongAnimal::~wrongAnimal()
{
        std::cout << "Destructor wrongAnimal check !" << std::endl;
}

std::string const &wrongAnimal::getType() const
{
    return _type;
}

 void wrongAnimal::makeSound() const
{
    std::cout << _type << " : Grrrrrr "<< std::endl; 
}

