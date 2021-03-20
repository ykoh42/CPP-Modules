#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{
public:
	Brain();

	int			GetIQ(void) const;
	std::string	identify(void) const;
	
private:
	int					mIQ;
};

#endif