#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	cout << "ClapTrap " << name << " has been created" << endl; 
	this->_name = name;
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap " << this->_name << " has been destroyed" << endl; 
}
ClapTrap::ClapTrap()
{
	cout << "ClapTrap Default has been called" << endl; 
}
void	ClapTrap::attack(string const &target)
{
	cout << this->_name << " attacked " << target
		 << " causing " << this->_attackDamage << " points of damage!" << endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	cout << this->_name << " took " << amount
		 << " points of damage! Health:" << _hitPoints << endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	_energyPoints += amount;
	cout << this->_name << " healed " << amount
		<< " points of health! Energypoints: "<< _energyPoints << endl;
}