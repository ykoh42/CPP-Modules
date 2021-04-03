#include <iostream>
#include "Array.hpp"

int main(void)
{
	{
		unsigned int		size;
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "empty array test" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		size = 0;
		Array<char>			crr(size);
		std::cout << "  char : " << crr.size() << std::endl;
		Array<int>			irr(size);
		std::cout << "   int : " << irr.size() << std::endl;
		Array<double>		drr(size);
		std::cout << "double : " << drr.size() << std::endl;
		Array<std::string>	srr(size);
		std::cout << "string : " << crr.size() << std::endl;
	}
	{
		unsigned int		size;
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "specific array test" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		size = 10;
		Array<char>			crr(size);
		std::cout << "  char : " << crr.size() << std::endl;
		Array<int>			irr(size);
		std::cout << "   int : " << irr.size() << std::endl;
		Array<double>		drr(size);
		std::cout << "double : " << drr.size() << std::endl;
		Array<std::string>	srr(size);
		std::cout << "string : " << crr.size() << std::endl;
	}
	{
		unsigned int		size;
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "operator[] test" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		size = 5;
		Array<char>			crr(size);
		crr[4] = 65;
		std::cout << "crr[4] = " << crr[4] << std::endl; 
		Array<int>			irr(size);
		irr[4] = 10;
		std::cout << "irr[4] : " << irr[4] << std::endl;
		Array<double>		drr(size);
		drr[4] = 42.42;
		std::cout << "drr[4] : " << drr[4] << std::endl;
		Array<std::string>	srr(size);
		srr[4] = "index 4";
		std::cout << "srr[4] : " << srr[4] << std::endl;

		std::cout << std::string(60, '-') << std::endl;
		std::cout << "out of bound test (size : " << size << ")" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		try
		{
			std::cout << crr[5];
		}
		catch(const std::exception& e)
		{
			std::cout << "crr[5] Exception : "<< e.what() << '\n';
		}
		try
		{
			std::cout << srr[-1];
		}
		catch(const std::exception& e)
		{
			std::cout << "srr[-1] Exception : "<< e.what() << '\n';
		}
	}
	{
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "copy constructor test" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		Array<std::string>	arr(2);
		arr[0] = "hello";
		arr[1] = "world";
		Array<std::string>	test(arr);
		std::cout << " arr[0] : " << arr[0] << std::endl;
		std::cout << "test[0] : " << test[0] << std::endl;
		std::cout << " arr[1] : " << arr[1] << std::endl;
		std::cout << "test[1] : " << test[1] << std::endl;

		std::cout << std::string(60, '-') << std::endl;
		std::cout << "operator= test" << std::endl;
		std::cout << std::string(60, '-') << std::endl;
		Array<std::string>	good(2);
		good = test;
		std::cout << good[0] << " " << good[1] << std::endl;
	}
	return (0);
}