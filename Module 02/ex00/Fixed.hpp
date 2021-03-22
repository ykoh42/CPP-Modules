#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(const Fixed& fixed);
	~Fixed(void);

	Fixed&				operator=(const Fixed& fixed);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);

private:
	int					mValue;
	const static int	bits = 8;
};

#endif