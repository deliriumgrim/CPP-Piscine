//
// Created by delirium on 11.10.22.
//

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA() {

}
void HumanA::attack()
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon->getType();
	std::cout << std::endl;
}
