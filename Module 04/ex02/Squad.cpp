#include "Squad.hpp"

Squad::Squad(void)
	: mCount(0)
	, mUnits(NULL)
{
}

Squad::Squad(const Squad& other)
{
	*this = other;
}

Squad::~Squad(void)
{
	if (mUnits)
	{
		for (int i = 0; i < mCount; i++)
		{
			delete mUnits[i];
		}
		delete[] mUnits;
	}
}

Squad&			Squad::operator=(const Squad& other)
{
	if (this == &other)
	{
		return (*this);
	}
	if (mUnits)
	{
		for (int i = 0; i < mCount; i++)
		{
			delete mUnits[i];
		}
		delete[] mUnits;
		mUnits = NULL;
	}
	mCount = 0;
	for (int i = 0; i < other.mCount; i++)
	{
		push(other.getUnit(i)->clone());
	}
	return (*this);
}

int				Squad::getCount(void) const
{
	return (mCount);
}

ISpaceMarine*	Squad::getUnit(int index) const
{
	if (mCount > 0 && index >= 0 && index < mCount)
	{
		return (mUnits[index]);
	}
	else
	{
		return (NULL);
	}
}

int				Squad::push(ISpaceMarine* unit)
{
	if (unit)
	{
		for (int i = 0; i < mCount; i++)
		{
			if (mUnits[i] == unit)
			{
				return (mCount);
			}
		}
		ISpaceMarine **tmp = new ISpaceMarine*[mCount + 1];
		for (int i = 0; i < mCount; i++)
		{
			tmp[i] = mUnits[i];
		}
		tmp[mCount] = unit;
		if (mCount)
		{
			delete[] mUnits;
		}
		mUnits = tmp;
		mCount++;
	}
	return (mCount);
}