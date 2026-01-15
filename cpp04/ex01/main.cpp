#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
    Animal* animals[6];
    std::cout << "---- Creating Animals ----" << std::endl;
    for (int i = 0; i < 3; i++)
        animals[i] = new Dog();

    for (int i = 3; i < 6; i++)
        animals[i] = new Cat();
    
    std::cout << "---- Cleaning up Animals ----" << std::endl;
    for (int i = 0; i < 6; i++)
        delete animals[i];

    std::cout << "Test deep copy:" << std::endl;
    Dog dog1;
    dog1.getBrain()->setIdea(0, "Chase the cat");
    Dog dog2 = dog1;
    std::cout << "Dog1 Idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 Idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;
    dog2.getBrain()->setIdea(0, "Eat the bone");
    std::cout << "After modifying Dog2's idea:" << std::endl;
    std::cout << "Dog1 Idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 Idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;  
    return 0;
}