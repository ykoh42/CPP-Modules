#ifndef SPAN_HPP
# define SPAN_HPP

# include <list>

class Span
{
public:
	Span(unsigned int n);
	Span(const Span& other);
	~Span(void);

	Span&           operator=(const Span& other);

	void            addNumber(int value);
    void            addNumber(std::list<int>::iterator first, std::list<int>::iterator last);

	unsigned int    shortestSpan(void) const;
	unsigned int    longestSpan(void) const;

private:
	Span(void);

    unsigned int    mMax;
	std::list<int>  mList;

	class MaxSizeException : public std::exception {
		virtual const char* what(void) const throw();
	};

	class MinSizeException : public std::exception {
		virtual const char* what(void) const throw();
	};
};

#endif