#include "Contact.hpp"

void        Contact::SetDataByIndex(const int index, const std::string str)
{
    mData[index] = str;
}

const std::string Contact::GetDataByIndex(const int index) const
{
	return (mData[index]);
}
