#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
class ClapTrap
{
    protected:
        std::string name;
        unsigned int hitpoints;
        unsigned int energy_points;
        unsigned int attack_damage;
    public:
        ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &obj);
        ClapTrap& operator=(const ClapTrap &obj);
        virtual ~ClapTrap();
        virtual void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif