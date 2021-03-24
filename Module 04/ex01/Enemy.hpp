#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
public:
	Enemy(void);
	Enemy(const Enemy& other);
    Enemy(int hp, const std::string& type);
	virtual ~Enemy(void);

	Enemy&              operator=(const Enemy& other);

    const std::string&  getType(void) const;
    int                 getHP(void) const;
    virtual void        takeDamage(int damage);

protected:
    int             mHP;
    std::string     mType;
};

#endif