#include "Span.hpp"
#include <iostream>

#include <vector>

int main(void)
{
	{
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "Provided test" << std::endl;
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
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "Limit value test" << std::endl;
		Span sp = Span(5);
		sp.addNumber(std::numeric_limits<int>::min());
		sp.addNumber(std::numeric_limits<int>::min());
		sp.addNumber(std::numeric_limits<int>::max());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "unsigned int max : " << std::numeric_limits<unsigned int>::max() << std::endl;
	}
	{
		try
		{
			std::cout << std::string(60, '-') << std::endl;
			std::cout << "Max size test" << std::endl;
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
			Span sp = Span(10001);
			std::vector<int> vec(10001, 0);
			sp.addNumber(vec.begin(), vec.end());
			std::cout << "end : " << *(sp.GetList().end()) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
		try
		{
			std::cout << std::string(60, '-') << std::endl;
			std::cout << "Add number exception test" << std::endl;
			Span sp = Span(10001);
			std::vector<int> vec(10002, 0);
			std::cout << "end : " << *(sp.GetList().end()) << std::endl;
			sp.addNumber(vec.begin(), vec.end());
			std::cout << "end : " << *(sp.GetList().end()) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	return (0);
}