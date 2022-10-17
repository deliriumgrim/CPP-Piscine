//
// Created by delirium on 11.10.22.
//

#include "HumanB.hpp"

HumanB::~HumanB() {}

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

void HumanB::attack()
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon->getType();
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
