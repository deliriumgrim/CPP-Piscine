#include "ScavTrap.hpp"

int main() {
	{
		std::cout << "ClapTrap tests" << std::endl;
		ClapTrap a("Andrew");
		a.attack("Snake");
		a.takeDamage(3);
		a.beRepaired(10);
		a.takeDamage(5);
		a.takeDamage(40);
		a.beRepaired(10);
	}
	{
		std::cout << std::endl << "ScavTrap tests" << std::endl;
		ScavTrap b("Denis");
		b.attack("Spider");
		b.guardGate();
		b.takeDamage(50);
		b.beRepaired(20);
		b.takeDamage(20);
		b.takeDamage(50);
		b.beRepaired(100);
	}
	return 0;
}
