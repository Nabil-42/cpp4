#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* i = new Dog;
    const Animal* j = new Cat;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();

    const wrongAnimal* beta = new wrongAnimal;
    const wrongAnimal* k = new wrongCat;
    beta->makeSound();
    k->makeSound();


return 0;
}