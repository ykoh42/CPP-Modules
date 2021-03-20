#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
public:
	void				SetDataByIndex(const int index, const std::string data);
	const std::string	GetDataByIndex(const int index) const;

private:
	std::string mData[11];
};

#endif