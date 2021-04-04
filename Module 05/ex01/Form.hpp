#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <iomanip>

class Form;
#include "Bureaucrat.hpp"

class Form
{
public:
	Form(void);
	Form(const std::string& name, const int signGrade, const int executeGrade);
	Form(const Form& other);
	virtual ~Form(void);

	Form&         		operator=(const Form& other);

	const std::string&  GetName(void) const;
	bool                GetSigned(void) const;
	int                 GetSignGrade(void) const;
	int                 GetExecuteGrade(void) const;

    void                beSigned(const Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception
    {
		virtual const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception
    {
		virtual const char* what(void) const throw();
	};

	class InvalidGradeException : public std::exception
    {
		virtual const char* what(void) const throw();
	};

	class SignedException : public std::exception
    {
		virtual const char* what(void) const throw();
	};

private:

	const std::string	mName;
	bool                mSigned;
	const int           mSignGrade;
	const int           mExecuteGrade;
};


std::ostream&       operator<<(std::ostream& os, const Form& Form);


#endif