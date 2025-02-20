#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Dog* i = new Dog("BOOOB");
    Dog f(*i);
    const Cat* j = new Cat;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << f.getType() << " " << std::endl;
    i->makeSound(); 
    f.makeSound();
    j->makeSound();
    meta->makeSound();

    const wrongAnimal* beta = new wrongAnimal;
    const wrongAnimal* k = new wrongCat;
    beta->makeSound();
    k->makeSound();

    delete meta;
    delete i;
    delete j;
    delete k;
    delete beta;

return 0;
}