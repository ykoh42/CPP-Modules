#ifndef CONVERTDOUBLE_HPP
# define CONVERTDOUBLE_HPP

# include "Convert.hpp"

class ConvertDouble : public Convert
{
public:
	ConvertDouble(const std::string& str);
	ConvertDouble(const ConvertDouble& other);
	virtual ~ConvertDouble(void);

	ConvertDouble&    operator=(const ConvertDouble& other);

    double            GetValue(void) const;

private:
	ConvertDouble(void);

    double            mValue;
};

#endif