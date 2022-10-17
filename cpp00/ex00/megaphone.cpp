#include <iostream>

void	PrintInfo(char **argv) 
{
	for (int i = 0; argv[i]; i++)
	{
		for (int j = 0; argv[i][j]; ++j)
			std::cout << (char)toupper(argv[i][j]);
	}
	std::cout << std::endl;
}

int main(int argc, char **argv) 
{
	if (argc > 1)
		PrintInfo(&argv[1]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
