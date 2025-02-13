#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *tab[20];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            tab[i] = new Dog;
        else (tab[i] = new Cat);
    }
    for (int i = 0; i < 10; ++i)
    {
        delete(tab[i]);
    }
    return 0;
}