#ifndef CONVERTINT_HPP
# define CONVERTINT_HPP

# include "Convert.hpp"

class ConvertInt : public Convert
{
public:
	ConvertInt(const std::string& str);
	ConvertInt(const ConvertInt& other);
	virtual ~ConvertInt(void);

	ConvertInt&	operator=(const ConvertInt& other);

	int			GetValue(void) const;

private:
	ConvertInt(void);

	int			mValue;
};

#endif