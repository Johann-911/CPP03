#include "DiamondTrap.hpp"

//Default Constructor
DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), _name("Default")
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

//Constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap " << _name << " constructor called" << std::endl;
} 

//Copy Construktor
DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy), _name(copy._name)
{
    std::cout << "DiamondTrap " << _name << " Copy constructor called" << std::endl;
}

//Copy Assignment Con
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    if(this != &copy)
    {
        ClapTrap::operator=(copy);
        _name =copy._name;
    }
    std::cout << "DiamondTrap " << _name << " Copy assignment operator called" << std::endl;
    return *this;
}

//Destrructor
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " Destrcutor called " << std::endl; 
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << _name << std::endl;
    std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
}