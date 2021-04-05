#include "ConvertChar.hpp"
#include "ConvertInt.hpp"
#include "ConvertFloat.hpp"
#include "ConvertDouble.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
        std::string str(argv[1]);

		try
		{
			std::cout << "char: ";
            char c = ConvertChar(str).GetValue();
			std::cout << "'" << c << "'" << std::endl;
		}
		catch(const ConvertChar::NonDisplayableException& e)
		{
			std::cout << "Non displayable" << '\n';
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << '\n';
		}

		try
		{
			std::cout << "int: ";
			std::cout << ConvertInt(str).GetValue() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << '\n';
		}

		try
		{
			std::cout << "float: ";

            std::stringstream   ss;
            ss << ConvertFloat(str).GetValue();
            if (ss.str().find('.') == std::string::npos)
            {
                std::string		pseudoLiterals[4] = {"inf", "-inf", "+inf", "nan"};
                int i = 0;
                for (; i < 4; i++)
                {
                    if (ss.str().compare(pseudoLiterals[i]) == 0)
                    {
                        break ;
                    }
                }
                if (i == 4)
                {
                    ss << ".0";
                }
            }
            ss << "f";
            std::cout << ss.str() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << '\n';
		}

		try
		{
			std::cout << "double: ";

            std::stringstream   ss;
            ss << ConvertDouble(str).GetValue();
            if (ss.str().find('.') == std::string::npos)
            {
                std::string		pseudoLiterals[4] = {"inf", "-inf", "+inf", "nan"};
                int i = 0;
                for (; i < 4; i++)
                {
                    if (ss.str().compare(pseudoLiterals[i]) == 0)
                    {
                        break ;
                    }
                }
                if (i == 4)
                {
                    ss << ".0";
                }
            }
            std::cout << ss.str() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << '\n';
		}
	}
	else
	{
		std::cout << "Invalid arguments" << std::endl;
		std::cout << "Usage : " << argv[0] << " LITERAL"<< std::endl;
	}
	// std::cout << std::fixed << std::numeric_limits<int>::min() << std::endl;
	return (0);
}