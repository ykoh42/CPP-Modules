#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	virtual ~ShrubberyCreationForm(void);

	ShrubberyCreationForm&		operator=(const ShrubberyCreationForm& other);

	void						execute(const Bureaucrat& bureaucrat) const;

private:
	ShrubberyCreationForm(void);

	std::string					mTarget;
	static const std::string	mAsciiTree;
};

#endif