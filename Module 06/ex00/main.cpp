#include "Convert.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Convert		value(argv[1]);
		
		try
		{
			std::cout << "char: ";
			std::cout << value.GetChar() << std::endl;
		}
		catch(const Convert::NonDisplayableException& e)
		{
			std::cout << "Non displayable" << '\n';
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << '\n';
		}

		try
		{
			std::cout << "int: ";
			std::cout << value.GetInt() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << '\n';
		}

		try
		{
			std::cout << "float: ";
			std::cout << value.GetFloat() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << '\n';
		}

		try
		{
			std::cout << "double: ";
			std::cout << value.GetDouble() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << '\n';
		}
	}
	else
	{
		std::cout << "Invalid arguments" << std::endl;
		std::cout << "Usage : " << argv[0] << " LITERAL"<< std::endl;
	}
	return (0);
}