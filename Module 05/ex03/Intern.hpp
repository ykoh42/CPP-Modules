#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(const Intern& other);
	virtual ~Intern(void);

	Intern&						operator=(const Intern& other);

	Form*   					makeForm(const std::string& name, const std::string& target) const;
	bool						isForm(const std::string& name) const;

private:
	static const std::string	mForms[3];
};

Form*						newShrubberyCreation(const std::string& target);
Form*						newRobotomyRequest(const std::string& target);
Form*						newPresidentialPardon(const std::string& target);

#endif