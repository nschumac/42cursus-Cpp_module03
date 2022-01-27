#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
	ClapTrap *test1 = new ClapTrap("1");
	ScavTrap *test2 = new ScavTrap("2");


	test1->takeDamage(5);
	test1->attack("YO MOM");
	test1->beRepaired(3);

	test2->takeDamage(5);
	test2->attack("YO MOM");
	test2->beRepaired(3);
	test2->guardGate();

	delete test1;
	delete test2;
	return (0);
}