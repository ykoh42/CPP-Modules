#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	virtual ~RobotomyRequestForm(void);

	RobotomyRequestForm&        operator=(const RobotomyRequestForm& other);

	void		                execute(const Bureaucrat& bureaucrat) const;

private:
	RobotomyRequestForm(void);

	std::string                 mTarget;
};

#endif