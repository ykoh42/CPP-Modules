#ifndef ARRAY_CPP
# define ARRAY_CPP

#include "Array.hpp"

template<typename T>
Array<T>::Array(void)
	: mSize(0)
	, mElems(new T[0])
{
}

template<typename T>
Array<T>::Array(unsigned int n)
	: mSize(n)
	, mElems(new T[n])
{
}

template<typename T>
Array<T>::Array(const Array<T>& other)
	: mSize(0)
	, mElems(new T[0])
{
	*this = other;
}

template<typename T>
Array<T>::~Array(void)
{
	delete[] mElems;
}

template<typename T>
Array<T>&		Array<T>::operator=(const Array& other)
{
	mSize = other.mSize;

	delete[] mElems;
	mElems = new T[mSize];

	if (mSize)
	{
		for (unsigned int i = 0; i < mSize; i++)
		{
			mElems[i] = other.mElems[i];
		}
	}
	return (*this);
}

template<typename T>
T&			Array<T>::operator[](unsigned int index)
{
	if (index >= mSize)
	{
		throw OutOfBoundsException();
	}
	else
	{
		return (mElems[index]);
	}
}

template<typename T>
const T&	Array<T>::operator[](unsigned int index) const
{
	if (index >= mSize)
	{
		throw OutOfBoundsException();
	}
	else
	{
		return (mElems[index]);
	}
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (mSize);
}

template<typename T>
const char*		Array<T>::OutOfBoundsException::what(void) const throw()
{
	return ("Out of bound exception");
}

#endif