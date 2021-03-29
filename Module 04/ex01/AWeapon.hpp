#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
public:
	AWeapon(void);
    AWeapon(const std::string& name, int apcost, int damage);
	AWeapon(const AWeapon& other);
	virtual ~AWeapon(void);

	AWeapon&            operator=(const AWeapon& other);
    const std::string&  getName(void) const;
    int                 getAPCost(void) const;
    int                 getDamage(void) const;
    void                setName(const std::string& name) const;
    void                setAPCost(const int apcost) const;
    void                setDamage(const int damage) const;
    virtual void        attack(void) const = 0;

private:
    std::string     mName;
    int             mAPcost;
    int             mDamage;
};

#endif