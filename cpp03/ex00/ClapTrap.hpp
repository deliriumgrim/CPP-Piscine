#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap{

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &obj);
	ClapTrap & operator = (const ClapTrap &obj);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
private:
	std::string 	_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int 	_attackDamage;
};
#endif
