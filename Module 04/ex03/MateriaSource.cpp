#include "MateriaSource.hpp"


MateriaSource::MateriaSource(void)
	: mCount(0)
{
	for (int i = 0; i < 4; i++)
    {
        mSources[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other)
	: mCount(0)
{
    *this = other;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < mCount; i++)
    {
        delete mSources[i];
		mSources[i] = NULL;
    }
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
    for (int i = 0; i < mCount; i++)
    {
        delete mSources[i];
		mSources[i] = NULL;
    }
    mCount = 0;
    for (int i = 0; i < other.mCount; i++)
    {
        learnMateria(other.mSources[i]->clone());
    }
	return (*this);
}

void			MateriaSource::learnMateria(AMateria* m)
{
    if (mCount < 4 && m)
    {
        for (int i = 0; i < mCount; i++)
        {
            if (mSources[i] == m)
            {
                return ;
            }
        }
        mSources[mCount] = m;
        mCount++;
    }
}

AMateria*		MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < mCount; i++)
	{
		if (mSources[i]->getType().compare(type) == 0)
		{
			return (mSources[i]->clone());
		}
	}
	return (NULL);
}
