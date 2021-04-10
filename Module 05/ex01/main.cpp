#include "Form.hpp"

int main(void)
{
	std::cout << "--------------------1 ~ 150 test-----------------------" << std::endl;
	try
	{
		Form	form("Contract", 0, 160);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Form	form("Contract", -123, 2);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "-------------------beSigned test-----------------------" << std::endl;
	Form		form("Contract", 2, 4);
	Bureaucrat  jack("jack", 3);

	try
	{
		form.beSigned(jack);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "-----------------IncrementGrade test-------------------" << std::endl;
	std::cout << jack << std::endl;
	jack.IncrementGrade();
	std::cout << jack << std::endl;
	std::cout << "-------------------signForm test-----------------------" << std::endl;
	std::cout << form << std::endl;
	jack.signForm(form);
	std::cout << form << std::endl;
	jack.signForm(form);
	std::cout << form << std::endl;
	return (0);
}