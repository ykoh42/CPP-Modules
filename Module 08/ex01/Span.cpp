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
        throw 
    }
    mList.push_back(value);
    mList.sort();
}

unsigned int    Span::shortestSpan(void) const
{
    return (*(++mList.begin()) - *mList.begin());
}

unsigned int    Span::longestSpan(void) const
{
    return (*mList.end() - *mList.begin());
}
