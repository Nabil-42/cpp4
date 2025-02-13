#ifndef ANIMAL_CAT
#define ANIMAL_CAT

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
    Brain *cerveau;

    protected :
    std::string _type;

    public:
    Cat();
    Cat(const std::string& name);
    Cat(const Cat& copie);
    Cat& operator=(const Cat& other);
    ~Cat();

    void makeSound() const;
};

#endif

