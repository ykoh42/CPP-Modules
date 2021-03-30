#include "Form.hpp"

Form::Form(void)
    : mName("undefined")
    , mSigned(0)
    , mSignGrade(1)
    , mExecuteGrade(1)
{
}

Form::Form(const std::string& name, const int signGrade, const int executeGrade)
    : mName(name)
    , mSigned(0)
    , mSignGrade(signGrade)
    , mExecuteGrade(executeGrade)
{
    if (signGrade < 1 || signGrade > 150)
    {
        throw Form::InvalidGradeException();
    }
    if (executeGrade < 1 || executeGrade > 150)
    {
        throw Form::InvalidGradeException();
    }
}

Form::Form(const Form& other)
    : mName(other.mName)
    , mSignGrade(other.mSignGrade)
    , mExecuteGrade(other.mExecuteGrade)
{
    *this = other;
}

Form::~Form(void)
{
}

Form&               Form::operator=(const Form& other)
{
    mSigned = other.mSigned;
    return (*this);
}

const std::string&  Form::GetName(void) const
{
    return (mName);
}

bool                Form::GetSigned(void) const
{
    return (mSigned);
}

int                 Form::GetSignGrade(void) const
{
    return (mSignGrade);
}

int                 Form::GetExecuteGrade(void) const
{
    return (mExecuteGrade);
}

void                Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.GetGrade() <= mSignGrade)
    {
        if (mSigned == false)
        {
            mSigned = true;
        }
        else
        {
            throw Form::SignedException();
        }
    }
    else
    {
        throw Form::GradeTooLowException();
    }
}

const char*         Form::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high.");
}

const char*         Form::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too low.");
}

const char*         Form::InvalidGradeException::what(void) const throw()
{
    return ("Grade must be among 1 ~ 150.");
}

const char*         Form::SignedException::what(void) const throw()
{
    return ("It is already signed.");
}

std::ostream&       operator<<(std::ostream& os, const Form& form)
{
    os << std::endl;
    os << "|-----------------------------------------------------|" << std::endl;
    os << "|                      " << form.GetName() << "                       |" << std::endl;
    os << "|-----------------------------------------------------|" << std::endl;
    os << "| Sign Grade : ";
    os << std::setw(3) << form.GetSignGrade();
    os << " | Execute Grade : ";
    os << std::setw(3) << form.GetExecuteGrade();
    os << " | Signed : ";
    if (form.GetSigned() == true)
    {
        os << "O |" << std::endl;
    }
    else
    {
        os << "X |" << std::endl;
    }
    os << "|-----------------------------------------------------|" << std::endl;
    os << "|                                                     |" << std::endl;
    os << "|-----------------------------------------------------|" << std::endl;
	return (os);
}
