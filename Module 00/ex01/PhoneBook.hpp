#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <sstream>

# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook(void);

	int			AddContact(void);
	int			ShowContact(void);

private:
	Contact		mContact[8];
	int			mIndex;
	std::string	mField[11];

	void		showContactByIndex(const int index) const;
};

#endif