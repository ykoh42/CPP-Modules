#include "Fixed.hpp"

Fixed::Fixed(void)
	: mValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	mValue = value << bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	mValue = roundf(value * (1 << bits));
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	mValue = fixed.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& 			Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	mValue = fixed.getRawBits();
	return (*this);
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (mValue);
}

void			Fixed::setRawBits(int const raw)
{
	std::cout << "Assignation operator called" << std::endl;
	mValue = raw;
}

float			Fixed::toFloat(void) const
{
	return (float(mValue) / float(1 << bits));
}

int				Fixed::toInt(void) const
{
	return (mValue >> bits);
}


std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	return (os << fixed.toFloat());
}