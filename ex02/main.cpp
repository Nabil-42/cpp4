#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{

    // const Animal* meta = new Animal();
    // const Animal* i = new Dog;
    // const Animal* j = new Cat;
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); 
    // j->makeSound();
    // meta->makeSound();

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