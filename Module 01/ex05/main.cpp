#include "Human.hpp"

int	main(void)
{
	Human	bob;

	std::cout << "Bob's       identity : " << bob.identify() << std::endl;
	std::cout << "Bob's brain identity : " << bob.getBrain().identify() << std::endl;
	return (0);
}