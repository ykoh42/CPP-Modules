#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade)
    : mName(name)
    , mGrade(grade)
{
    if (mGrade < 1 || mGrade > 150)
    {
        throw Bureaucrat::InvalidGradeException();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    *this = other;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat&         Bureaucrat::operator=(const Bureaucrat& other)
{
    mGrade = other.mGrade;
    return (*this);
}


const std::string&  Bureaucrat::GetName(void) const
{
    return (mName);
}

int                 Bureaucrat::GetGrade(void) const
{
    return (mGrade);
}

void                Bureaucrat::IncrementGrade(void)
{
    int tmp = mGrade - 1;
    if (tmp < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else
    {
        mGrade = tmp;
    }
}

void                Bureaucrat::DecrementGrade(void)
{
    int tmp = mGrade + 1;
    if (tmp > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        mGrade = tmp;
    }
}

void				Bureaucrat::signForm(Form& form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << "<" << mName << "> signs the <" << form.GetName() << ">." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "<" << mName << "> cannot sign the <" << form.GetName() << "> because " << e.what() << std::endl;
    }
}

void				Bureaucrat::executeForm(const Form& form)
{
    try
    {
        form.execute(*this);
        std::cout << "<" << mName << "> executes <" << form.GetName() << ">." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "<" << mName << "> cannot execute <" << form.GetName() << "> because " << e.what() << std::endl;
    }
}

const char*         Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high.");
}

const char*         Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too low.");
}

const char*         Bureaucrat::InvalidGradeException::what(void) const throw()
{
    return ("Grade must be among 1 ~ 150");
}

std::ostream&       operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    return (os << "Bureaucrat" << " <" << bureaucrat.GetName() << ">'s grade is <" << bureaucrat.GetGrade() << ">.");
}