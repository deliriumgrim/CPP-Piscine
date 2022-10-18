#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	setName("Default");
	setHp(100);
	setEp(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap main constructor called" << std::endl;
	setName(name);
	setHp(100);
	setEp(50);
	setAttackDamage(20);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap() {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	setName(obj.getName());
	setHp(obj.getHp());
	setEp(obj.getEp());
	setAttackDamage(obj.getAttackDamage());
	return (*this);
}

void ScavTrap::guardGate() {
	if (!getHp() || !getEp())
	{
		std::cout << "Hit points or energy points 0" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " got Gate keeper"
			 << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (!getHp() || !getEp())
	{
		std::cout << "Hit points or energy points 0" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " <<  getName()
			  << " attacks " << target
			  << " causing " << getAttackDamage()
			  << " points of damage!" << std::endl;
	setEp(getEp() - 1);
}
