#include <iostream>

int main(int argc, char *argv[])
{
    std::locale loc;

    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            std::string str = argv[i];
            for(std::string::size_type j = 0; j < str.length(); j++)
            {
                std::cout << std::toupper(str[j],loc);
            }
        }
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << std::endl;
    return (0);
}