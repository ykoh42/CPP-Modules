#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	virtual ~PresidentialPardonForm(void);

	PresidentialPardonForm&		operator=(const PresidentialPardonForm& other);

	void						execute(const Bureaucrat& bureaucrat) const;

private:
	PresidentialPardonForm(void);

	std::string					mTarget;
};

#endif