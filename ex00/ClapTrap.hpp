#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class ClapTrap
{
	private:
		string	_name;
		int		_hitPoints;
		int		_energyPoints;
		int		_attackDamage;
	public:
		void	attack(string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap(string name);
		~ClapTrap();
};

#endif