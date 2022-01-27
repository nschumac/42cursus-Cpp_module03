#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap *test1 = new ClapTrap("1");
	ScavTrap *test2 = new ScavTrap("2");
	FragTrap *test3 = new FragTrap("3");
	DiamondTrap *test4 = new DiamondTrap("4");

	cout << "-----------------------" << endl;
	test1->takeDamage(5);
	test1->attack("YO MOM");
	test1->beRepaired(3);

	cout << "-----------------------" << endl;
	test2->takeDamage(5);
	test2->attack("YO MOM");
	test2->beRepaired(3);
	test2->guardGate();

	cout << "-----------------------" << endl;
	test3->takeDamage(5);
	test3->attack("YO MOM");
	test3->beRepaired(3);
	test3->highFivesGuys();

	cout << "-----------------------" << endl;
	test4->takeDamage(5);
	test4->attack("YO MOM");
	test4->beRepaired(3);
	test4->highFivesGuys();
	test4->guardGate();
	test4->whoAmI();
	cout << "-----------------------" << endl;
	delete test1;
	delete test2;
	delete test3;
	delete test4;
	return (0);
}