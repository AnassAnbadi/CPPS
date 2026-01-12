#include "ScavTrap.hpp"

int main()
{
    ScavTrap st1("Scavvy");
    ScavTrap st2 = st1;
    ScavTrap st3;
    st3 = st1;

    st1.attack("Target1");
    st1.takeDamage(5);
    st1.beRepaired(3);
    st1.guardGate();

    st2.attack("Target2");
    st2.takeDamage(12);
    st2.beRepaired(4);
    st2.guardGate();

    st3.attack("Target3");
    st3.takeDamage(8);
    st3.beRepaired(2);
    st3.guardGate();

    return 0;
}