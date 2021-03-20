#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
public:
	const Brain&	getBrain(void) const;
	std::string		identify(void) const;

private:
	const Brain		mBrain;
};

#endif