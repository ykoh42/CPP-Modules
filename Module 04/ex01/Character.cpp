#include "Character.hpp"

Character::Character(void)
	: mAP(40)
	, mWeapon(NULL)
{
}

Character::Character(const std::string& name)
	: mName(name)
	, mAP(40)
	, mWeapon(NULL)
{
}

Character::Character(const Character& other)
{
	*this = other;
}

Character::~Character(void)
{
}

Character&			Character::operator=(const Character& other)
{
	mName = other.mName;
	mAP = other.mAP;
	mWeapon = other.mWeapon;
	return (*this);
}

const std::string&	Character::getName(void) const
{
	return (mName);
}

int					Character::getAP(void) const
{
	return (mAP);
}

AWeapon*			Character::getWeapon(void) const
{
	return (mWeapon);
}

void				Character::recoverAP(void)
{
	mAP += 10;
	if (mAP > 40)
	{
		mAP = 40;
	}
}

void				Character::attack(Enemy* enemy)
{
	if (mWeapon && mAP >= mWeapon->getAPCost() && enemy)
	{
		mAP -= mWeapon->getAPCost();
		std::cout << mName << " attacks " << enemy->getType() << " with a " << mWeapon->getName() << std::endl;
		mWeapon->attack();
		enemy->takeDamage(mWeapon->getDamage());
		if (enemy->getHP() == 0)
		{
			delete enemy;
		}
	}
}

void				Character::equip(AWeapon* weapon)
{
	mWeapon = weapon;
}

std::ostream&		operator<<(std::ostream& os, const Character& character)
{
	if (character.getWeapon())
	{
		os << character.getName() << " has " << character.getAP() <<" AP and wields a " << character.getWeapon()->getName() << std::endl;
	}
	else
	{
		os << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	}
	return (os);
}