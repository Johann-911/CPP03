#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Hero");
    a.attack("Goblin");
    a.takeDamage(10);
    a.beRepaired(5);

    return 0;
}