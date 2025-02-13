#ifndef ANIMAL_DOG
#define ANIMAL_DOG

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    private:

    protected :
    std::string _type;

    public:
    Dog();
    Dog(const std::string& name);
    Dog(const Dog& copie);
    Dog& operator=(const Dog& other);
    ~Dog();

    void makeSound() const;


};

#endif