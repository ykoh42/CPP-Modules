#include "ShrubberyCreationForm.hpp"

const std::string		ShrubberyCreationForm::mAsciiTree =\
"\
      /---\\\n\
     /__ __\\\n\
      _/ \\_\n\
     /     \\\n\
    /_     _\\\n\
     /ASCII\\\n\
    / TREE  \\\n\
   /_________\\\n\
       | |\n\
       | |\n\
       | |\n\
       |_|\n\
";

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: Form("ShrubberyCreation", 145, 137)
	, mTarget("undefined")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: Form("ShrubberyCreation", 145, 137)
	, mTarget(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	mTarget = other.mTarget;
	return (*this);
}

void					ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const
{
	if (Form::GetSigned() == true)
	{
		if (bureaucrat.GetGrade() <= Form::GetExecuteGrade())
		{
			std::ofstream	ofs(mTarget + "_shrubbery", std::ofstream::out | std::ofstream::trunc);

			if (ofs.is_open())
			{
				ofs << mAsciiTree;
				ofs.close();
			}
			else
			{
				throw Form::OpenFailedException();
			}
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