#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C : public Base
{
public:
	C(void);
	C(const C& other);
	virtual ~C(void);

	C&	operator=(const C& other);
};

#endif