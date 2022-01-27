#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		ScavTrap();
	public:
		void 	guardGate();
		void	attack(string const &target);
		ScavTrap(string name);
		~ScavTrap();
};

#endif