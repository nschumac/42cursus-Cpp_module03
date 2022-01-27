#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_energyPoints = 50;
	cout << "ScavTrap default has been created" << endl; 
}

ScavTrap::ScavTrap(string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	cout << "ScavTrap " << name << " has been created" << endl; 
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap " << this->_name << " has been destroyed" << endl; 
}

void	ScavTrap::attack(string const &target)
{
	cout << "ScavTrap "<< this->_name << " attacked " << target
		 << " causing " << this->_attackDamage << " points of damage!" << endl;
}

void 	ScavTrap::guardGate()
{
	cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode." << endl;
}