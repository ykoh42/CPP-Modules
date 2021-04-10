#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B : public Base
{
public:
	B(void);
	B(const B& other);
	virtual ~B(void);

	B&	operator=(const B& other);
};

#endif