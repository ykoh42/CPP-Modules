#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	: Form("PresidentialPardon", 25, 5)
	, mTarget("undefined")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form("PresidentialPardon", 25, 5)
	, mTarget(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	mTarget = other.mTarget;
	return (*this);
}

void					PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const
{
	if (Form::GetSigned() == true)
	{
		if (bureaucrat.GetGrade() <= Form::GetExecuteGrade())
		{
			std::cout << "<" << mTarget << "> has been pardoned by Zafod Beeblebrox." << std::endl;
		}
		else
		{
			throw Form::GradeTooLowException();
		}
	}
	else
	{
		throw Form::NotSignedException();
	}
}