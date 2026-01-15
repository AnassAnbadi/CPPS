# include "Animal.hpp"
Animal::Animal() : type("Animal")
{
    std::cout << "Animal Default constructor called" << std::endl;
}
Animal::Animal(const Animal &obj)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = obj;
}
Animal& Animal::operator=(const Animal &obj)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}
void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
std::string Animal::getType() const
{
    return this->type;
}