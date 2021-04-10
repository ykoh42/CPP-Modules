#ifndef CONVERTCHAR_HPP
# define CONVERTCHAR_HPP

# include "Convert.hpp"

class ConvertChar : public Convert
{
public:
	ConvertChar(const std::string& str);
	ConvertChar(const ConvertChar& other);
	virtual ~ConvertChar(void);

	ConvertChar&	operator=(const ConvertChar& other);

	char			GetValue(void) const;

	class NonDisplayableException : public std::exception
	{
		virtual const char*	what(void) const throw();
	};

private:
	ConvertChar(void);

	char			mValue;
};

#endif