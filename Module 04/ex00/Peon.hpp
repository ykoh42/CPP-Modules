#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(void);
	Peon(const Peon& other);
	Peon(const std::string& name);
	virtual ~Peon();

	Peon&   operator=(const Peon& other);

private:
    void    getPolymorphed(void) const;
};

#endif