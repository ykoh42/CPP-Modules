#include <iostream>

int	main(void)
{
	std::string		str("HI THIS IS BRAIN");
	std::string*	ptr = &str;
	std::string&	ref = str;

	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;

	str = "str variable changed";
	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;

	ref = "changed";
	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}