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

Span&           Span::operator=(const Span& other)
{
    mList = other.mList;
    return (*this);
}

void            Span::addNumber(int value)
{
    if (mList.size() >= mMax)
    {
        throw MaxSizeException();
    }
    else
    {
        mList.push_back(value);
        mList.sort();
    }
}

void            Span::addNumber(std::list<int>::iterator first, std::list<int>::iterator last)
{
    if (mList.size() >= mMax)
    {
        throw MaxSizeException();
    }
    else
    {
        mList.insert(mList.end(), first, last);
        mList.sort();
    }
}

unsigned int    Span::shortestSpan(void) const
{
    if (mList.size() < 2)
    {
        throw MinSizeException();
    }
    return (*(++mList.begin()) - *mList.begin());
}

unsigned int    Span::longestSpan(void) const
{
    if (mList.size() < 2)
    {
        throw MinSizeException();
    }
    return (*(--mList.end()) - *mList.begin());
}

const char*     Span::MaxSizeException::what(void) const throw()
{
    return ("Max size exception");
}

const char*     Span::MinSizeException::what(void) const throw()
{
    return ("Min size exception");
}