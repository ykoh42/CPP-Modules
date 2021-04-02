#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
    : Form("RobotomyRequest", 72, 45)
    , mTarget("undefined")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : Form("RobotomyRequest", 72, 45)
    , mTarget(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
    *this = other;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    mTarget = other.mTarget;
    return (*this);
}

void                    RobotomyRequestForm::execute(const Bureaucrat& bureaucrat) const
{
    if (Form::GetSigned() == true)
    {
        if (bureaucrat.GetGrade() <= Form::GetExecuteGrade())
        {
            std::cout << "Ziiigg...." << std::endl;
            std::cout << "<" << mTarget << "> has been robotomized successfully 50% of the time." << std::endl;
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
