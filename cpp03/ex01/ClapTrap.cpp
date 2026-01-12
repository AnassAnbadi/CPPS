# include "ClapTrap.hpp"
ClapTrap::ClapTrap() : name("Default"), hitpoints(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hitpoints(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Parameterized constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "ClapTrap Copy constructor called for " << obj.name << std::endl;
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
    if (this != &obj)
    {
        this->name = obj.name;
        this->hitpoints = obj.hitpoints;
        this->energy_points = obj.energy_points;
        this->attack_damage = obj.attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called for " << this->name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->energy_points == 0 || this->hitpoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy points or hitpoints left to attack." << std::endl;
        return;
    }
    this->energy_points--;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitpoints < amount)
        this->hitpoints = 0;
    else
        this->hitpoints -= amount;
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage! Remaining hitpoints: " << this->hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points == 0 || this->hitpoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy points or hitpoints left to repair." << std::endl;
        return;
    }
    this->hitpoints += amount;
    this->energy_points--;
    std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points! Current hitpoints: " << this->hitpoints << std::endl;
}
