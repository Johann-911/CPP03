#include "ClapTrap.hpp"

//Default constructor
ClapTrap::ClapTrap() : _name("Unnamed")
{
    std::cout << "Deafult constructor called" << std::endl;
}

//Constructor
ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << name << " is called" << std::endl;
}
