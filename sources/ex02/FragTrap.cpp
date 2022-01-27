#include "FragTrap.hpp"

FragTrap::FragTrap(string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	cout << "FragTrap " << name << " has been created" << endl; 
}

FragTrap::~FragTrap()
{
	cout << "FragTrap " << this->_name << " has been destroyed" << endl;
}

void FragTrap::highFivesGuys(void)
{
	cout << "FragTrap " << this->_name << " would like to highfive someone" << endl;
}