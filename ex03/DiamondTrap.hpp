#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{   
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap &operator=(const DiamondTrap &copy);
        ~DiamondTrap();

        void whoAmI();
        void attack(const std::string& target);


};

#endif