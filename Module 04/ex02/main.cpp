#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main(void)
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

	// std::cout << std::string(50, '-') << std::endl;
	// std::cout << vlc->getCount() << std::endl;
	// vlc->push(bob);
	// std::cout << vlc->getCount() << std::endl;
	// std::cout << std::string(50, '-') << std::endl;

    delete vlc;

    return (0);
}

