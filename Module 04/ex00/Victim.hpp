#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
public:
	Victim(void);
	Victim(const std::string& name);
	Victim(const Victim& other);
	virtual ~Victim(void);

	Victim&             operator=(const Victim& other);

    const std::string&  GetName(void) const;
    void				SetName(const std::string& name);
    virtual void        getPolymorphed(void) const;

private:
	std::string         mName;
};

std::ostream&           operator<<(std::ostream& os, const Victim& victim);

#endif