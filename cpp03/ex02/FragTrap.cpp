# include "FragTrap.hpp"
FragTrap::FragTrap() : ClapTrap()
{
    this->hitpoints = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    this->hitpoints = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap Parameterized constructor called for " << name << std::endl;
}
FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "FragTrap Copy constructor called for " << obj.name << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap &obj)
{
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
    }
    return *this;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called for " << this->name << std::endl;
}
void FragTrap::attack(const std::string &target)
{
    if (this->energy_points == 0 || this->hitpoints == 0)
    {
        std::cout << "FragTrap " << this->name << " has no energy points or hitpoints left to attack." << std::endl;
        return;
    }
    this->energy_points--;
    std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}
void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " is requesting a high five!" << std::endl;
}