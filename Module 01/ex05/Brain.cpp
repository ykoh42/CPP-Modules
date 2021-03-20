#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
	: mIQ(100)
{
}

int			Brain::GetIQ(void) const
{
	return (mIQ);
}

std::string	Brain::identify(void) const
{
	std::stringstream	ss;

	ss << "0x" << std::uppercase << std::hex << intptr_t(this);
	return (ss.str());
}
