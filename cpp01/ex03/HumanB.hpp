//
// Created by delirium on 11.10.22.
//

#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP
#include "Weapon.hpp"
class HumanB{
public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void	setWeapon(Weapon &weapon);
private:
	std::string _name;
	Weapon *_weapon;
};
#endif //EX03_HUMANB_HPP
