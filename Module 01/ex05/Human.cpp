#include "Human.hpp"

const Brain&	Human::getBrain(void) const
{
	return (this->mBrain);
}

std::string		Human::identify(void) const
{
	return (this->mBrain.identify());
}