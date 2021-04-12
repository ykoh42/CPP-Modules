#include "Span.hpp"

Span::Span(void)
	: mMax(0)
{
}

Span::Span(unsigned int n)
	: mMax(n)
{
}

Span::Span(const Span& other)
{
	*this = other;
}

Span::~Span(void)
{
}

Span&					Span::operator=(const Span& other)
{
	mList = other.mList;
	return (*this);
}

const std::list<int>&	Span::GetList(void) const
{
	return (mList);
}

void					Span::addNumber(int value)
{
	if (mMax <= mList.size())
	{
		throw MaxSizeException();
	}
	else
	{
		mList.push_back(value);
	}
}

unsigned int			Span::shortestSpan(void) const
{
	if (mList.size() < 2)
	{
		throw MinSizeException();
	}

	std::list<int>	tmp(mList);
	tmp.sort();

	unsigned int	shortest = -1;

	for (std::list<int>::iterator it = tmp.begin(); it != --(tmp.end()); ++it)
	{
		std::list<int>::iterator itNext = it;
		itNext++;

		unsigned int	diff = *itNext - *it;
		if (diff < shortest)
		{
			shortest = diff;
		}
	}
	return (shortest);
}

unsigned int			Span::longestSpan(void) const
{
	if (mList.size() < 2)
	{
		throw MinSizeException();
	}
	std::list<int>  tmp(mList);

	tmp.sort();
	return (*(--tmp.end()) - *tmp.begin());
}

const char*				Span::MaxSizeException::what(void) const throw()
{
	return ("Max size exception");
}

const char*				Span::MinSizeException::what(void) const throw()
{
	return ("Min size exception");
}