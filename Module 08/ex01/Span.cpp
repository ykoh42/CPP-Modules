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
	std::list<int>  tmp1(mList);

	tmp1.unique();
	if (mList.size() != tmp1.size())
	{
		return (0);
	}
	std::list<int>  tmp2(mList);
	tmp2.sort();

	long	result[tmp2.size()];
	std::adjacent_difference(tmp2.begin(), tmp2.end(), result);

	return (*std::min_element(result + 1, result + tmp2.size()));
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