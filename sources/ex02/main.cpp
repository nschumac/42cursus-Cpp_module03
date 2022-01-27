#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap *test1 = new ClapTrap("1");
	ScavTrap *test2 = new ScavTrap("2");
	FragTrap *test3 = new FragTrap("3");

	test1->takeDamage(5);
	test1->attack("YO MOM");
	test1->beRepaired(3);

	test2->takeDamage(5);
	test2->attack("YO MOM");
	test2->beRepaired(3);
	test2->guardGate();

	test3->takeDamage(5);
	test3->attack("YO MOM");
	test3->beRepaired(3);
	test3->highFivesGuys();

	delete test1;
	delete test2;
	delete test3;

	return (0);
}