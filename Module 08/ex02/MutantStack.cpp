#ifndef MUTANTSTACK_CPP
# define MUTANTSTACK_CPP

# include "MutantStack.hpp"

template <class T, class Container>
MutantStack<T, Container>::MutantStack(void)
	: std::stack<T, Container>()
{
}

template <class T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container>& other)
	: std::stack<T, Container>(other)
{
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack(void)
{
}

template <class T, class Container>
MutantStack<T, Container>&									MutantStack<T, Container>::operator=(const MutantStack<T, Container>& other)
{
	this->c = other.c;
	return (*this);
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator				MutantStack<T, Container>::begin(void)
{
	return (this->c.begin());
}

template <class T, class Container>
typename MutantStack<T, Container>::const_iterator			MutantStack<T, Container>::begin(void) const
{
	return (this->c.begin());
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator				MutantStack<T, Container>::end(void)
{
	return (this->c.end());
}

template <class T, class Container>
typename MutantStack<T, Container>::const_iterator			MutantStack<T, Container>::end(void) const
{
	return (this->c.end());
}

template <class T, class Container>
typename MutantStack<T, Container>::reverse_iterator		MutantStack<T, Container>::rbegin(void)
{
	return (this->c.rbegin());
}

template <class T, class Container>
typename MutantStack<T, Container>::const_reverse_iterator	MutantStack<T, Container>::rbegin(void) const
{
	return (this->c.rbegin());
}

template <class T, class Container>
typename MutantStack<T, Container>::reverse_iterator		MutantStack<T, Container>::rend(void)
{
	return (this->c.rend());
}

template <class T, class Container>
typename MutantStack<T, Container>::const_reverse_iterator	MutantStack<T, Container>::rend(void) const
{
	return (this->c.rend());
}

#endif