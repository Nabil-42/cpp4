#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

wrongCat::wrongCat() : wrongAnimal("wrongCat")
{
    std::cout << "Simple constructeur wrongCat check !" << std::endl;
}

wrongCat::wrongCat(const std::string& type) : wrongAnimal(type)
{
    std::cout << "Constructeur string check !" << std::endl;
}

wrongCat::wrongCat(const wrongCat& copie) : wrongAnimal(copie)
{
    std::cout << "Constructeur copie check !" << std::endl;
}
wrongCat& wrongCat::operator=(const wrongCat& other)
{
    if (this != &other)
    {   
        _type = other._type;
        std::cout << "Constructeur wrongCat operator check !" << std::endl;
    }
    return *this;
}

wrongCat::~wrongCat()
{
        std::cout << "Destructor wrongCat check !" << std::endl;
}

void wrongCat::makeSound() const
{
    std::cout << _type << " : Wrong Miaou ?????????? "<< std::endl; 
}