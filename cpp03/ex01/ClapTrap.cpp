#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "Default";
	this->_hp = 10;
	this->_ep = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap main constructor called" << std::endl;
	if (name.empty())
		this->_name = "Default";
	else
		this->_name = name;
	this->_hp = 10;
	this->_ep = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &obj) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this == &obj)
		return *this;
	this->_name = obj._name;
	this->_ep = obj._ep;
	this->_hp = obj._hp;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap default destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (!this->_hp || !this->_ep)
	{
		std::cout << "Hit points or energy points 0" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " <<  this->_name
			  << " attacks " << target
			  << " causing " << this->_attackDamage
			  << " points of damage!" << std::endl;
	this->_ep--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (!this->_hp || !this->_ep)
	{
		std::cout << "Hit points or energy points 0" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " has taken "
			  << amount << " damage" << std::endl;
	if (amount >= this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!this->_hp || !this->_ep)
	{
		std::cout << "Hit points or energy points 0" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " repaired "
			  << amount << " hit points" << std::endl;
	this->_hp += amount;
	this->_ep--;
}