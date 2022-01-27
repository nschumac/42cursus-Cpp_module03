#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	cout << "Constructor has been Called!" << endl;
	this->_name = name;
}
ClapTrap::~ClapTrap()
{
	cout << "Destructor has been Called !" << endl;
}

void	ClapTrap::attack(string const &target)
{
	cout << "ClapTrap " << this->_name << " attacked " << target
		 << " causing " << this->_attackDamage << " points of damage!" << endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	cout << "ClapTrap " << this->_name << " took " << amount
		 << " points of damage! Health:" << _hitPoints << endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	_energyPoints += amount;
	cout << "ClapTrap " << this->_name << " healed " << amount
		<< " points of health! Energypoints: "<< _energyPoints << endl;
}