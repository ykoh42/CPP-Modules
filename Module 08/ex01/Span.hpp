#ifndef SPAN_HPP
# define SPAN_HPP

// # include <set>
// # include <cmath>
// # include <algorithm>
# include <list>

class Span
{
public:
	Span(unsigned int n);
	Span(const Span& other);
	~Span(void);

	Span&           operator=(const Span& other);

	void            addNumber(int value);
	// template<typename InputIterator>
	// void addNumber(InputIterator begin, InputIterator end);

	unsigned int    shortestSpan(void) const;
	unsigned int    longestSpan(void) const;

private:
	Span(void);

    unsigned int    mMax;
	std::list<int>  mList;

	class MaxSizeException : public std::exception {
		virtual const char* what(void) const throw();
	};
	// class NotEnoughNumbersException : public std::exception {
	// 	virtual const char* what() const throw();
	// };
};

#endif