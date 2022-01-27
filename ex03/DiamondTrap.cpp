#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name) : _name(name)
{
	ClapTrap::_name = name + "_clap_name";
	cout << "DiamondTrap " << name << " has been created" << endl; 
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap " << this->_name << " has been destroyed" << endl; 
}
void DiamondTrap::whoAmI()
{
	cout << "I am " << this->ClapTrap::_name << endl;
}