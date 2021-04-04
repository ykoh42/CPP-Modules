#include <iostream>

template<typename T>
void    iter(T* arr, std::size_t length, void (*f)(T& elem))
{
	for (std::size_t i = 0; i < length; i++)
    {
		(*f)(arr[i]);
    }
}

template<typename T>
void    iter(T* arr, std::size_t length, void (*f)(const T& elem))
{
	for (std::size_t i = 0; i < length; i++)
    {
		(*f)(arr[i]);
    }
}

template<typename T>
void    display(const T& value)
{
	std::cout << value << " ";
}