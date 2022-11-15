#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "Default";
	this->_hp = 100;
	this->_ep = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap main constructor called" << std::endl;
	if (name.empty())
		this->_name = "Default";
	else
		this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_attackDamage = 20;
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
	if (this == &obj)
		return *this;
	this->_name = obj._name;
	this->_attackDamage = obj._attackDamage;
	this->_ep = obj._ep;
	this->_hp = obj._hp;
	return *this;
}

void ScavTrap::guardGate() {
	if (!this->_hp || !this->_ep)
	{
		std::cout << "Hit points or energy points 0" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " got Gate keeper"
			  << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (!this->_hp || !this->_ep)
	{
		std::cout << "Hit points or energy points 0" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name
			  << " attacks " << target
			  << " causing " << this->_attackDamage
			  << " points of damage!" << std::endl;
	this->_ep--;
}
