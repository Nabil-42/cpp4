#ifndef ANIMAL
#define ANIMAL

#include <iostream>


class Animal 
{
    private:

    protected :
    std::string _type;

    public:
    Animal();
    Animal(const std::string& name);
    Animal(const Animal& copie);
    Animal& operator=(const Animal& other);
    virtual ~Animal();

    std::string const& getType() const;
    virtual void makeSound() const;


};

#endif