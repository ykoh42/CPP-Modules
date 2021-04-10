#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"

class Sorcerer
{
public:
	Sorcerer(const std::string& name, const std::string& title);
	Sorcerer(const Sorcerer& other);
	~Sorcerer(void);

	Sorcerer&			operator=(const Sorcerer& other);
	const std::string&	GetName(void) const;
	const std::string&	GetTitle(void) const;
	void				polymorph(const Victim& victim) const;

private:
	Sorcerer(void);

	std::string			mName;
	std::string			mTitle;
};

std::ostream&			operator<<(std::ostream& os, const Sorcerer& sorcerer);

#endif