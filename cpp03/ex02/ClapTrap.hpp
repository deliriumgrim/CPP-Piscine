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

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	void setName(std::string name);
	void setHp(unsigned int hp);
	void setEp(unsigned int ep);
	void setAttackDamage(unsigned int attackDamage);

	std::string 	getName() const;
	unsigned int 	getHp() const;
	unsigned int 	getEp() const;
	unsigned int 	getAttackDamage() const;

private:
	std::string 	_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int 	_attackDamage;
};
#endif
