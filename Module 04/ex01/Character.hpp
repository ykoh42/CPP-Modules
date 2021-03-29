#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
public:
    Character(const std::string& name);
	Character(const Character& other);
	~Character(void);

	Character&          operator=(const Character& other);

    const std::string&  getName(void) const;
    int                 getAP(void) const;
    AWeapon*            getWeapon(void) const;

    void                recoverAP(void);
    void                attack(Enemy* enemy);
    void                equip(AWeapon* weapon);

private:
	Character(void);

	std::string         mName;
    int                 mAP;
	AWeapon*            mWeapon;
};

std::ostream&           operator<<(std::ostream& os, const Character& character);

#endif