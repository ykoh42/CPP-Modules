#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
public:
	Pony(const std::string& name);

	void					Cry(void);
	void					Run(void);

private:
		const std::string	name;
};

#endif