#include <iostream>

int main(int argc, char *argv[])
{

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        std::locale loc;

        for (int i = 1; i < argc; i++)
        {
            std::string str(argv[i]);
            
            for(std::string::size_type j = 0; j < str.length(); j++)
            {
                std::cout << std::toupper(str[j], loc);
            }
        }
    }
    std::cout << std::endl;
    return (0);
}