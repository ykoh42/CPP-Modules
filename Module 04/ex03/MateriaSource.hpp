#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource& other);
	virtual ~MateriaSource(void);

	MateriaSource&	operator=(const MateriaSource& other);

	void			learnMateria(AMateria* m);
	AMateria*		createMateria(const std::string& type);

private:
	int				mCount;
	AMateria*		mSources[4];
};

#endif