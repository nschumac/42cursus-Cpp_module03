#include "ClapTrap.hpp"

int main()
{
	ClapTrap *test1 = new ClapTrap("1");

	test1->takeDamage(5);
	test1->attack("YO MOM");
	test1->beRepaired(3);
	delete test1;

	for (unsigned int i = 0; i < 10; i++)
		ClapTrap(std::to_string(i));
	return (0);
}