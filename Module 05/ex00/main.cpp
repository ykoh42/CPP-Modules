#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "---------over 150---------" << std::endl;
	try
	{
		Bureaucrat	jack("Jack", 151);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << "---------under  0---------" << std::endl;
	try
	{
		Bureaucrat	jack("Jack", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << "---------Too high---------" << std::endl;
	Bureaucrat		jack("Jack", 3);
	try
	{
		jack.IncrementGrade();
		std::cout << jack << std::endl;
		jack.IncrementGrade();
		std::cout << jack << std::endl;
		jack.IncrementGrade();
		std::cout << jack << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << jack << std::endl;
	
	std::cout << "---------Too low---------" << std::endl;
	Bureaucrat		jim("Jimmy", 148);
	try
	{
		jim.DecrementGrade();
		std::cout << jim << std::endl;
		jim.DecrementGrade();
		std::cout << jim << std::endl;
		jim.DecrementGrade();
		std::cout << jim << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << jim << std::endl;
	return (0);
}