#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    AAnimal* animals[4];
    std::cout << "---- Creating Animals ----" << std::endl;
    for (int i = 0; i < 3; i++)
        animals[i] = new Dog();

    for (int i = 3; i < 4; i++)
        animals[i] = new Cat();
    
    std::cout << "---- Cleaning up Animals ----" << std::endl;
    for (int i = 0; i < 4; i++)
        delete animals[i];

      std::cout << "---- Correct Animal Sounds ----" << std::endl;
    // const Animal* meta = new Animal();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    // meta->makeSound();

    // delete meta;
    delete j;
    delete i;

    return 0;
}