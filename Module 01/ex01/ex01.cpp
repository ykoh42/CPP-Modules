#include <iostream>

void	memoryLeak(void)
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}