#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap Parameterized constructor called for " << name << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap Copy constructor called for " << obj.name << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
    }
    return *this;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called for " << this->name << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
    if (this->energy_points == 0 || this->hitpoints == 0)
    {
        std::cout << "ScavTrap " << this->name << " has no energy points or hitpoints left to attack." << std::endl;
        return;
    }
    this->energy_points--;
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode." << std::endl;
}   
