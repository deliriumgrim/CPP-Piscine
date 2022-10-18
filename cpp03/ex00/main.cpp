#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Jack");

	a.attack("Spider");
	a.takeDamage(5);
	a.beRepaired(2);
	a.takeDamage(2);
	a.takeDamage(5);
	a.beRepaired(10);
	return 0;
}
