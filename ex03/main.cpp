#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() 
{
    DiamondTrap d("Ava");

    d.whoAmI();
    d.attack("dummy");
    d.guardGate();
    d.highFivesGuys();

    return 0;


    
}