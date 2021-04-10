#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"

int main(void)
{
	Character*	me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon*	pr = new PlasmaRifle();
	AWeapon*	pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "-----------attack fail test-----------" << std::endl;
	Enemy* c = new RadScorpion();
	AWeapon* wp = new PowerFist();
	me->equip(wp);
	me->attack(c);
	me->attack(c);
	std::cout << "--------------------------------------" << std::endl;
	std::cout << *me;
	std::cout << "--------------------------------------" << std::endl;
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	std::cout << *me;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "------------recoverAP test------------" << std::endl;

	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	return (0);
}