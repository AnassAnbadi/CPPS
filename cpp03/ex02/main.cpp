#include "FragTrap.hpp"

int main()
{
    FragTrap ft1("Fraggy");
    FragTrap ft2 = ft1;
    FragTrap ft3;
    ft3 = ft1;

    ft1.attack("Target1");
    ft1.takeDamage(5);
    ft1.beRepaired(3);
    ft1.highFivesGuys();

    ft2.attack("Target2");
    ft2.takeDamage(12);
    ft2.beRepaired(4);
    ft2.highFivesGuys();

    ft3.attack("Target3");
    ft3.takeDamage(8);
    ft3.beRepaired(2);
    ft3.highFivesGuys();

    return 0;
}