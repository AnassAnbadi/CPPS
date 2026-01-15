# include "AAnimal.hpp"
AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal Default constructor called" << std::endl;
}
AAnimal::AAnimal(const AAnimal &obj)
{
    std::cout << "AAnimal Copy constructor called" << std::endl;
    *this = obj;
}
AAnimal& AAnimal::operator=(const AAnimal &obj)
{
    std::cout << "AAnimal Assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}
AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called" << std::endl;
}
std::string AAnimal::getType() const
{
    return this->type;
}
