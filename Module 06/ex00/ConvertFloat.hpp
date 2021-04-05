#ifndef CONVERTFLOAT_HPP
# define CONVERTFLOAT_HPP

# include "Convert.hpp"

class ConvertFloat : public Convert
{
public:
	ConvertFloat(const std::string& str);
	ConvertFloat(const ConvertFloat& other);
	virtual ~ConvertFloat(void);

	ConvertFloat&    operator=(const ConvertFloat& other);

    float            GetValue(void) const;

private:
	ConvertFloat(void);

    float            mValue;
};

#endif