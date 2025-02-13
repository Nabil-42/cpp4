#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

wrongCat::wrongCat() : wrongAnimal("wrongCat")
{
     _type = "wrongCat";
    std::cout << "Simple constructeur wrongCat check !" << std::endl;
}

wrongCat::wrongCat(const std::string& type) : wrongAnimal(type)
{
    _type = type;
    std::cout << "Constructeurcheck !" << std::endl;
}

wrongCat::wrongCat(const wrongCat& copie)
{
    _type = copie._type;
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