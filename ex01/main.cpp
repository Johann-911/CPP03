#include "ScavTrap.hpp"

int main()
{
    ScavTrap s("Scavenger");
    s.attack("Enemy");
    s.takeDamage(10);  // Das kommt von ClapTrap!
    s.guardGate();
    return 0;
}