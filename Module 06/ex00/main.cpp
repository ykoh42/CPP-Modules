#include "Convert.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Convert		value(argv[1]);
		std::cout << value;
	}
	else
	{
		std::cout << "Invalid arguments" << std::endl;
		std::cout << "Usage : " << argv[0] << " LITERAL"<< std::endl;
	}
	return (0);
}

