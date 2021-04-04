#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main(void)
{
    std::cout << std::string(60, '-') << std::endl;
    std::cout << "stack test" << std::endl;
    std::cout << std::string(60, '-') << std::endl;
    {
        MutantStack<int>    mstack;

        mstack.push(5);
        mstack.push(17);

        std::cout << mstack.top() << std::endl;

        mstack.pop();

        std::cout << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << std::string(60, '-') << std::endl;
    std::cout << "list test" << std::endl;
    std::cout << std::string(60, '-') << std::endl;
    {
        std::list<int>    mstack;

        mstack.push_back(5);
        mstack.push_back(17);

        std::cout << mstack.back() << std::endl;

        mstack.pop_back();

        std::cout << mstack.size() << std::endl;

        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        //[...]
        mstack.push_back(0);

        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int> s(mstack);
    }
    std::cout << std::string(60, '-') << std::endl;
    std::cout << "reverse iterator test" << std::endl;
    std::cout << std::string(60, '-') << std::endl;
    {
        MutantStack<int>    mstack;

        mstack.push(5);
        mstack.push(17);

        std::cout << mstack.top() << std::endl;

        mstack.pop();

        std::cout << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);

        MutantStack<int>::reverse_iterator rit = mstack.rbegin();
        MutantStack<int>::reverse_iterator rite = mstack.rend();

        ++rit;
        --rit;
        while (rit != rite)
        {
            std::cout << *rit << std::endl;
            ++rit;
        }
        std::stack<int> s(mstack);
    }
    return (0);
}