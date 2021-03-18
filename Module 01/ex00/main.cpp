#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*pony;

	pony = new Pony("🐴");
	pony->Cry();
	pony->Run();
	delete pony;
}

void	ponyOnTheStack(void)
{
	Pony	pony("🦄");
	pony.Cry();
	pony.Run();
}

int		main(void)
{
	std::cout << "ponyOnTheHeap" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	std::cout << "ponyOnTheStack" << std::endl;
	ponyOnTheStack();
	return (0);
}