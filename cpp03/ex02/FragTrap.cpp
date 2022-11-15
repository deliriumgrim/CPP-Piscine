#include "FragTrap.hpp"

FragTrap::~FragTrap() {
	std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "Default";
	this->_hp = 100;
	this->_ep = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name) {
	std::cout << "FragTrap main constructor called" << std::endl;
	if (name.empty())
		this->_name = "Default";
	else
		this->_name = name;
	this->_hp = 100;
	this->_ep = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap() {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this == &obj)
		return *this;
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_attackDamage = obj._attackDamage;
	return *this;
}

void FragTrap::highFivesGuys( void ) {
	if (!this->_hp || !this->_ep)
	{
		std::cout << "Hit points or energy points 0" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " high fives guys" << std::endl;
}
