#include "ClapTrap.hpp"

//Default constructor
ClapTrap::ClapTrap() : _name("Unnamed") , _hitPoints(10) , _energyPoints(10) , _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << "Deafult constructor called" << std::endl;
}

//Constructor
ClapTrap::ClapTrap(std::string name) : _name(name) , _hitPoints(10) , _energyPoints(10) , _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << "  constructor is called" << std::endl;
}

//Copy Constructor 
ClapTrap::ClapTrap(const ClapTrap &copy) 
    : _name(copy._name) , _hitPoints(copy._hitPoints) , _energyPoints(copy._energyPoints) , _attackDamage(copy._attackDamage)
{
    std::cout << "ClapTrap " << _name << " Copy constructor called" << std::endl;
}

//Copy assigment
ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap " << _name << " Copy assignment constructor called" << std::endl;
    if(this != &copy)
    {
        _name = copy._name;
        _hitPoints = copy._hitPoints; 
        _energyPoints = copy._energyPoints;
        _attackDamage = copy._attackDamage;
    }
    return *this;
}

//Destructor
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " Destrcutor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack because it has no hit points or energy points left." << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target 
        << ", causing " << _attackDamage << " points of damage!" << std::endl;
    

}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    if(_hitPoints < 0)
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage! HP is now " << _hitPoints << std::endl;

}


void ClapTrap::beRepaired(unsigned int amount)
{   
    if(_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't repair because it has no hit points or energy points left." << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " was repaired by " << amount << " points! HP is now " << _hitPoints << std::endl;

}