#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	{
		Intern	someRandomIntern;
		Form*	rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << std::string(60, '-') << std::endl;
		rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
		std::cout << *rrf;
		Bureaucrat  jack("jack", 44);
		std::cout << std::string(60, '-') << std::endl;
		jack.signForm(*rrf);
		std::cout << *rrf;
		std::cout << std::string(60, '-') << std::endl;
		jack.executeForm(*rrf);
	}
	return (0);
}