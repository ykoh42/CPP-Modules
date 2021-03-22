#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& fixed);
	~Fixed(void);

	Fixed&				operator=(const Fixed& fixed);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
private:
	int					mValue;
	const static int	bits = 8;
};

std::ostream&			operator<<(std::ostream& os, const Fixed& fixed);

#endif