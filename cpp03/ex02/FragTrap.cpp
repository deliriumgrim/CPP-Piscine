#include "FragTrap.hpp"

FragTrap::~FragTrap() {
	std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	setName("Default");
	setHp(100);
	setEp(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const std::string &name) {
	std::cout << "FragTrap main constructor called" << std::endl;
	setName(name);
	setHp(100);
	setEp(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap() {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	setName(obj.getName());
	setHp(obj.getHp());
	setEp(obj.getEp());
	setAttackDamage(obj.getAttackDamage());
	return (*this);
}

void FragTrap::highFivesGuys( void ) {
	if (!getHp() || !getEp())
	{
		std::cout << "Hit points or energy points 0" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->getName() << " high fives guys" << std::endl;
}
