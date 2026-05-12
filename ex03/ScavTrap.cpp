#include "ScavTrap.hpp"

//Default COnstructor
ScavTrap::ScavTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

//Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

//Copy Constructor
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap " << _name << " Copy constructor called" << std::endl;

}

//Copy assigment constructor
ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    if(this != &copy)
        ClapTrap::operator=(copy);
    std::cout << "ScavTrap  " << _name << " Copy assignment constructor called" << std::endl;
    return *this;
}

//Destructor
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " can't attack!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target 
        << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode" << std::endl;
}