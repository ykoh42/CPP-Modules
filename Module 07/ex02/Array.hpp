#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <cctype>

template<typename T>
class Array
{
public:
	Array(void);
	Array(unsigned int n);
	Array(const Array<T>& other);
	~Array(void);

	Array&			operator=(const Array& other);
	T&				operator[](unsigned int index);
	const T&		operator[](unsigned int index) const;

	unsigned int	size(void) const;

private:
	unsigned int	mSize;
	T*				mElems;

	class OutOfBoundsException: public std::exception {
		virtual const char* what(void) const throw();
	};
};

# include "Array.cpp"
#endif