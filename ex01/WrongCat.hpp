#ifndef WRONG_ANIMAL_CAT
#define WRONG_ANIMAL_CAT

#include <iostream>
#include "WrongAnimal.hpp"

class wrongCat : public wrongAnimal
{
    private:

    protected :
    std::string _type;

    public:
    wrongCat();
    wrongCat(const std::string& name);
    wrongCat(const wrongCat& copie);
    wrongCat& operator=(const wrongCat& other);
    ~wrongCat();

    void makeSound() const;
};

#endif