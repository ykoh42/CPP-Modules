#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
public:
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& other);
	~Bureaucrat(void);

	Bureaucrat&         operator=(const Bureaucrat& other);

	const std::string&  GetName(void) const;
	int                 GetGrade(void) const;
	void                IncrementGrade(void);
	void                DecrementGrade(void);

private:
	Bureaucrat(void);

	const std::string   mName;
	int                 mGrade;

	class GradeTooHighException : public std::exception
    {
		const char* what(void) const throw();
	};

	class GradeTooLowException: public std::exception
    {
		const char* what(void) const throw();
	};

	class InvalidGradeException: public std::exception
    {
		const char* what(void) const throw();
	};
};

std::ostream&       operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif