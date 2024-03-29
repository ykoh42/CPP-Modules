#include "iter.hpp"

int main(void)
{
	int		intR[5] = { 0, 1, 2, 3, 4 };
	iter(intR, 5, &display);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;


	float	floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(floatR, 5, &display);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;


	double	doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(doubleR, 5, &display);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;

	bool	boolR[2] = { false, true };
	iter(boolR, 2, &display);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;

	std::string stringR[5] = { "phrase 1", "phrase 2", "templates", "are", "fun" };
	iter(stringR, 5, &display);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;
	iter(stringR, 2, &display);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;
	iter(stringR, 0, &display);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;
	iter(intR, 3, &display<int>);
	std::cout << std::endl;
	iter(intR, 3, &plus65<int>);
	iter(intR, 3, &display<int>);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;
	iter(stringR, 3, &display<std::string>);
	std::cout << std::endl;
	iter(stringR, 3, &plus65<std::string>);
	iter(stringR, 3, &display<std::string>);
	std::cout << std::endl;
	std::cout << std::string(60, '-') << std::endl;
	return (0);
}