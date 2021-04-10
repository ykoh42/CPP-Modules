#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A : public Base
{
public:
	A(void);
	A(const A& other);
	virtual ~A(void);

	A&	operator=(const A& other);
};

#endif