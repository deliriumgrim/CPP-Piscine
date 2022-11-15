#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	{
		std::cout << "ClapTrap tests" << std::endl;
		ClapTrap a("Dennis");
		a.attack("Spider");
		a.takeDamage(5);
		a.beRepaired(2);
		a.takeDamage(2);
		a.takeDamage(5);
		a.beRepaired(10);
	}
	{
		std::cout << std::endl << "ScavTrap tests" << std::endl;
		ScavTrap b("Jack");
		b.attack("Wolf");
		b.takeDamage(50);
		b.beRepaired(20);
		b.takeDamage(20);
		b.guardGate();
		b.takeDamage(50);
		b.takeDamage(100);
	}
	{
		std::cout << std::endl << "FragTrap tests" << std::endl;
		FragTrap c("John");
		c.attack("Snake");
		c.takeDamage(5);
		c.beRepaired(2);
		c.takeDamage(2);
		c.takeDamage(5);
		c.beRepaired(1);
		c.highFivesGuys();
		c.takeDamage(91);
		c.beRepaired(10);
	}
	return 0;
}
