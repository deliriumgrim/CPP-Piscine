#include "Replace.hpp"

void Replace::replaceAndWrite()
{
	std::ifstream	in;
	std::ofstream	out;
	std::string	buf;

	in.open(this->_filename.c_str());
	out.open((this->_filename + ".replace").c_str());
	if (!in.is_open() || !out.is_open())
	{
		std::cout << "Failed to open file" << std::endl;
		return ;
	}
	getline(in, buf, '\0');
	_checkOccurance(buf);
	out << buf;
	in.close();
	out.close();
}

void Replace::_checkOccurance(std::string &buf)
{
	size_t found;

	while (true)
	{
		found = buf.find(this->_firstString);
		if (found != std::string::npos)
		{
			buf.erase(found, this->_firstString.length());
			buf.insert(found, this->_secondString);
		}
		else
			break ;
	}
}

Replace::Replace(std::string filename, std::string firstString, std::string secondString)
{
	this->_filename = filename;
	this->_firstString = firstString;
	this->_secondString = secondString;
}

Replace::~Replace() {}

