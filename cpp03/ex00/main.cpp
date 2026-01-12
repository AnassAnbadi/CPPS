#include "ClapTrap.hpp"

int main()
{
    ClapTrap ct1("Clappy");
    ClapTrap ct2 = ct1;
    ClapTrap ct3;
    ct3 = ct1;

    ct1.attack("Target1");
    ct1.takeDamage(5);
    ct1.beRepaired(3);

    ct2.attack("Target2");
    ct2.takeDamage(12);
    ct2.beRepaired(4);

    ct3.attack("Target3");
    ct3.takeDamage(8);
    ct3.beRepaired(2);

    return 0;
}