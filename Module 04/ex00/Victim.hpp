#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
public:
	Victim(void);
	Victim(const Victim& other);
	Victim(const std::string& name);
	virtual ~Victim(void);

	Victim&             operator=(const Victim& other);

    const std::string&  GetName(void) const;
    virtual void        getPolymorphed(void) const;

protected:
	std::string         mName;
};

std::ostream&           operator<<(std::ostream& os, const Victim& victim);

#endif