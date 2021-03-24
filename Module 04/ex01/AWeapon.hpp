#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
public:
	AWeapon(void);
	AWeapon(const AWeapon& other);
    AWeapon(const std::string& name, int apcost, int damage);
	virtual ~AWeapon(void);

	AWeapon&            operator=(const AWeapon& other);
    const std::string&  getName(void) const;
    int                 getAPCost(void) const;
    int                 getDamage(void) const;
    virtual void        attack(void) const = 0;

protected:
    std::string     mName;
    int             mAPcost;
    int             mDamage;
};

#endif