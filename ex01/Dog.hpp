#ifndef ANIMAL_DOG
#define ANIMAL_DOG

#include <iostream>
#include "Animal.hpp"


class Dog : public Animal
{
    private:
    Brain *cerveau;

    protected :

    public:
    Dog();
    Dog(const std::string& name);
    Dog(const Dog& copie);
    Dog& operator=(const Dog& other);
    ~Dog();

    void makeSound() const;


};

#endif