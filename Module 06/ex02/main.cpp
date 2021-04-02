#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*   generate(void)
{
    int random = rand() % 3;

    if (random == 0)
    {
        return (new A);
    }
    else if (random == 1)
    {
        return (new B);
    }
    else
    {
        return (new C);
    }
}

void    identify_from_pointer(Base* p)
{
    try
    {
        if (dynamic_cast<A*>(p) != 0)
        {
            std::cout << "A" << std::endl;
        }
        else if (dynamic_cast<B*>(p) != 0)
        {
            std::cout << "B" << std::endl;
        }
        else if (dynamic_cast<C*>(p) != 0)
        {
            std::cout << "C" << std::endl;
        }
        else
        {
            std::cout << "Can not identify." << std::endl;
        }
        
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what();
    }
}

void    identify_from_reference(Base& p)
{
    identify_from_pointer(&p);
}

int     main(void)
{
    srand(time(NULL));

	for (int i = 1; i <= 50; i++)
	{
		Base*   base = generate();
		std::cout << "Test " << i << std::endl;
		identify_from_pointer(base);
		identify_from_reference(*base);
		std::cout << std::endl;
		delete base;
	}
    return (0);
}