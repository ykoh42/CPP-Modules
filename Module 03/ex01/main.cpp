#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap    wilhelm("WILHELM");
    FragTrap    jack("JACK");
    ScavTrap*   son;

    std::cout << "\n<WILHELM> : I WILL KILL YOU JACK!!\n" << std::endl;
    wilhelm.rangedAttack("Jack");
    jack.takeDamage(30);
    wilhelm.meleeAttack("Jack");
    jack.takeDamage(30);
    wilhelm.meleeAttack("Jack");
    jack.takeDamage(30);
    std::cout << "\n<JACK> : STOP IT!!\n";
    std::cout << "\n<JACK> : TAKE MY ATTACK!!\n" << std::endl;
    jack.vaulthunter_dot_exe("WILHELM");
    jack.vaulthunter_dot_exe("WILHELM");
    jack.vaulthunter_dot_exe("WILHELM");
    jack.vaulthunter_dot_exe("WILHELM");
    jack.vaulthunter_dot_exe("WILHELM");
    jack.vaulthunter_dot_exe("WILHELM");
    std::cout << "\n<JACK> : SHIT 🤬 !!\n" << std::endl;
    son = new ScavTrap("SON");
    std::cout << "\n<SON> : JACK! 널 위해 싸울게 !!\n" << std::endl;
    son->rangedAttack("WILHELM");
    std::cout << "\n<SON> : 이걸론 안되겠어 JACK! 도움되는 물건을 만들어 줄게 !!\n" << std::endl;
    son->challengeNewcomer("JACK");
    son->challengeNewcomer("JACK");
    son->challengeNewcomer("JACK");
    son->challengeNewcomer("JACK");
    std::cout << "\nWhat Son invented was useless!" << std::endl;
    std::cout << "\n<SON> : 미안! 자폭으로 사죄할게!!\n" << std::endl;
    delete son;
    return (0);
}