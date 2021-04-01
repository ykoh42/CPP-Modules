#include "Character.hpp"

Character::Character(void)
	: mName("undefined")
    , mCount(0)
{
    for (int i = 0; i < 4; i++)
    {
        mInventory[i] = NULL;
    }
}

Character::Character(const std::string& name)
    : mName(name)
    , mCount(0)
{
    for (int i = 0; i < 4; i++)
    {
        mInventory[i] = NULL;
    }
}

Character::Character(const Character& other)
{
    *this = other;
}

Character::~Character(void)
{
    for (int i = 0; i < mCount; i++)
    {
        delete mInventory[i];
		mInventory[i] = NULL;
    }
}


Character&          Character::operator=(const Character& other)
{
    mName = other.mName;
    for (int i = 0; i < mCount; i++)
    {
        delete mInventory[i];
		mInventory[i] = NULL;
    }
    mCount = 0;
    for (int i = 0; i < other.mCount; i++)
    {
        equip(other.mInventory[i]->clone());
    }
	return (*this);
}

const std::string&  Character::getName(void) const
{
    return (mName);
}

void                Character::equip(AMateria* m)
{
    if (mCount < 4 && m)
    {
        for (int i = 0; i < mCount; i++)
        {
            if (mInventory[i] == m)
            {
                return ;
            }
        }
        mInventory[mCount] = m;
        mCount++;
    }
}

void                Character::unequip(int idx)
{
    if (idx >= 0 && idx < mCount && mInventory[idx])
    {
        if (idx == 3)
        {
            mInventory[idx] = NULL;
        }
        else
        {
            for (int i = idx; i < 3; i++)
            {
                mInventory[i] = mInventory[i + 1];
                mInventory[i + 1] = NULL;
            }
        }
		mCount--;
    }
}

void                Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < mCount && mInventory[idx])
    {
        mInventory[idx]->use(target);
    }
}
