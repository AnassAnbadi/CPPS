#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
}
Dog::Dog(const Dog &obj) : Animal(obj)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->brain = new Brain(*obj.brain);
}
Dog& Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Assignment operator called" << std::endl;
    if (this != &obj)
    {
        Animal::operator=(obj);
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*obj.brain);
    }
    return *this;
}
Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog Destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}
Brain* Dog::getBrain() const
{
    return this->brain;
}
