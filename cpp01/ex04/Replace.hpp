#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <iostream>
#include <fstream>

class Replace {

public:
	Replace(std::string filename, std::string firstString, std::string secondString);
	~Replace();
	void	replaceAndWrite();

private:
	std::string 	_filename;
	std::string 	_firstString;
	std::string 	_secondString;
	void		_checkOccurance(std::string &buf);

};
#endif
