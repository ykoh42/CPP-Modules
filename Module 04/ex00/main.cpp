#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Turtle.hpp"

int main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");

	Victim		jim("Jimmy");
	Peon		joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << std::string(50, '-') << std::endl;
	Turtle		squirtle("squirtle");
	std::cout << squirtle;
	robert.polymorph(squirtle);
	std::cout << std::string(50, '-') << std::endl;
	return (0);
}