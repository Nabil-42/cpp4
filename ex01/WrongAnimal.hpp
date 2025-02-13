#ifndef WRONG_ANIMAL
#define WRONG_ANIMAL

#include <iostream>


class wrongAnimal 
{
    private:

    protected :
    std::string _type;

    public:
    wrongAnimal();
    wrongAnimal(const std::string& name);
    wrongAnimal(const wrongAnimal& copie);
    wrongAnimal& operator=(const wrongAnimal& other);
    ~wrongAnimal();

    std::string const& getType() const;
    void makeSound() const;

};

#endif