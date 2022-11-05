#include "Harl.hpp"

void Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*ptr[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int		i = (level == levels[0]) ? 0 : \
			(level == levels[1]) ? 1 : \
			(level == levels[2]) ? 2 : \
			(level == levels[3]) ? 3 : -1;
	switch (i) 
	{
		case -1:
			std::cout << "This level does not exist" << std::endl;
			break ;
		default:
			(this->*ptr[i])();
	}
}

void Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my "
				"7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
	<< std::endl;
}

void Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
				 "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<<std::endl;
}

void Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
				 "I’ve been coming for years whereas you started working here since last month."
	<< std::endl;
}

void Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl() {}

Harl::~Harl() {}
