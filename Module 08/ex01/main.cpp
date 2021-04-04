#include "Span.hpp"
#include <iostream>

int main(void)
{
    {
        std::cout << std::string(60, '-') << std::endl;
        std::cout << "Provided test" << std::endl;
        std::cout << std::string(60, '-') << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        try
        {
            std::cout << std::string(60, '-') << std::endl;
            std::cout << "Max size test" << std::endl;
            std::cout << std::string(60, '-') << std::endl;
            Span sp = Span(5);
            sp.addNumber(5);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            sp.addNumber(11);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }
    {
        try
        {
            std::cout << std::string(60, '-') << std::endl;
            std::cout << "Min size test" << std::endl;
            std::cout << std::string(60, '-') << std::endl;
            Span sp = Span(5);
            sp.addNumber(5);
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }
    {
        try
        {
            std::cout << std::string(60, '-') << std::endl;
            std::cout << "Add number test" << std::endl;
            std::cout << std::string(60, '-') << std::endl;
            Span sp = Span(10000);

            // vector<int> 

            // for(int i = 10000; i > 0; i--)
            // {
            //     sp.addNumber(i);
            // }

            sp.addNumber(5);
            sp.addNumber(1);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }
    return (0);
}