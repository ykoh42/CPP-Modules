#ifndef TURTLE_HPP
# define TURTLE_HPP

# include "Victim.hpp"

class Turtle : public Victim
{
public:
	Turtle(void);
	Turtle(const Turtle& other);
	Turtle(const std::string& name);
	virtual ~Turtle();

	Turtle&   operator=(const Turtle& other);

private:
    void    getPolymorphed(void) const;
};

#endif