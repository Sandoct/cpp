
#include <iostream>

int	main (int argc, char **argv)
{
	int	i;

	i = 0;	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i++ < argc && argv[i])
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char) (std::toupper(argv[i][j]));
		std::cout << std::endl;
	}
}
