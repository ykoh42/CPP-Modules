#ifndef TURTLE_HPP
# define TURTLE_HPP

# include "Victim.hpp"

class Turtle : public Victim
{
public:
	Turtle(void);
	Turtle(const std::string& name);
	Turtle(const Turtle& other);
	virtual ~Turtle();

	Turtle&   operator=(const Turtle& other);

private:
    void    getPolymorphed(void) const;
};

#endif