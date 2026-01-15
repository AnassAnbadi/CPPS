#include "Cat.hpp"
Cat::Cat() : Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}
Cat::Cat(const Cat &obj) : Animal(obj)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    this->brain = new Brain(*obj.brain);
}
Cat& Cat::operator=(const Cat &obj)
{
    std::cout << "Cat Assignment operator called" << std::endl;
    if (this != &obj)
    {
        Animal::operator=(obj);
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*obj.brain);
    }
    return *this;
}
Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat Destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}
Brain* Cat::getBrain() const
{
    return this->brain;
}
