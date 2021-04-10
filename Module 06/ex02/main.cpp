#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*   generate(void)
{
	int	random = rand() % 3;

	if (random == 0)
	{
		return (new A);
	}
	else if (random == 1)
	{
		return (new B);
	}
	else
	{
		return (new C);
	}
}

void	identify_from_pointer(Base* p)
{
	if (dynamic_cast<A*>(p) != 0)
	{
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p) != 0)
	{
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p) != 0)
	{
		std::cout << "C" << std::endl;
	}
}

void	identify_from_reference(Base& p)
{

	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}

int	 main(void)
{
	srand(time(NULL));

	for (int i = 1; i <= 50; i++)
	{
		Base*	base = generate();
		std::cout << "Test " << i << std::endl;
		identify_from_pointer(base);
		identify_from_reference(*base);
		std::cout << std::endl;
		delete base;
	}
	return (0);
}