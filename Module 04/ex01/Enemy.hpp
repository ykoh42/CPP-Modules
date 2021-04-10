#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
public:
	Enemy(int hp, const std::string& type);
	Enemy(const Enemy& other);
	virtual ~Enemy(void);

	Enemy&				operator=(const Enemy& other);
	
	const std::string&	getType(void) const;
	int					getHP(void) const;
	void				setType(const std::string& type);
	void				setHP(const int hp);
	virtual void		takeDamage(int damage);

private:
	Enemy(void);
	
	int					mHP;
	std::string			mType;
};

#endif