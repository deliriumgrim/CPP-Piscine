#include "Replace.hpp"

int main(int argc, char **argv) {

	if (argc != 4)
	{
		std::cout << "Wrong argument" << std::endl;
		return 1;
	}
	Replace replace(argv[1], argv[2], argv[3]);
	replace.replaceAndWrite();
	return 0;
}
