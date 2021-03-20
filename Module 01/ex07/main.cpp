#include <iostream>
#include <fstream>

static void			replaceLine(std::string& line, std::string s1, std::string s2)
{
	while (true)
	{
		std::size_t found = line.find(s1);
		
		if (found != std::string::npos)
		{
			line.replace(found, s1.length(), s2);
		}
		else
		{
			break ;
		}
	}
}

int					main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cout << "Invalid arguments." << std::endl;
		std::cout << "Ussage : " << argv[0] << " \"FILE\" \"STRING\" \"STRING\"" << std::endl;
	}
	else
	{
		std::string	fileName(argv[1]);
		std::string	s1(argv[2]);
		std::string	s2(argv[3]);

		if (s1.empty() || s2.empty())
		{
			std::cout << "EMPTY STRING IS FORBIDDEN." << std::endl;
		}
		else
		{
			std::ifstream	ifs(fileName, std::ifstream::in);

			if (ifs.is_open())
			{
				std::ofstream	ofs(fileName + ".replace", std::ofstream::out | std::ofstream::trunc);

				if (ofs.is_open())
				{
					while (true)
					{
						std::string	line;

						getline(ifs, line);
						replaceLine(line, s1, s2);
						ofs << line;
						if (ifs.eof())
						{
							break ;
						}
						else
						{
							ofs << '\n';
						}
					}
				}
				else
				{
					std::cout << "OPEN FAILED." << std::endl;
				}
				ofs.close();
			}
			else
			{
				std::cout << "OPEN FAILED." << std::endl;
			}
			ifs.close();
		}
	}
	return (0);
}