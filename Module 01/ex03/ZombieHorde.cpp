#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(const int size)
	:mSize(size)
{
	if (size <= 0)
	{
		std::cout << "SIZE MUST BE MORE THAN 0." << std::endl;
	}
	else
	{
		std::srand(std::time(NULL));
		std::string	alphabet("AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz");

		mHorde = new Zombie[size];
		for (int i = 0; i < mSize; i++)
		{
			std::string	name;

			for (std::string::size_type i = 0; i < 10; i++)
			{
				 name.push_back(alphabet[rand() % alphabet.length()]);
			}
			mHorde[i].SetName(name);
			mHorde[i].SetType("Horde");
		}
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] mHorde;
}

void ZombieHorde::announce(void) const
{
	for (int i = 0; i < mSize; i++)
	{
		mHorde[i].announce();
	}
}