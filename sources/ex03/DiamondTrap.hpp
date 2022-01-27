#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		string _name;

	public:
		DiamondTrap(string name);
		~DiamondTrap();
		void whoAmI();
};

#endif