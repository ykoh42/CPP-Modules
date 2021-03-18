#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	mIndex = 0;

	mField[0] = "FIRST NAME";
	mField[1] = "LAST NAME";
	mField[2] = "NICKNAME";
	mField[3] = "LOGIN";
	mField[4] = "POSTAL ADDRESS";
	mField[5] = "EMAIL ADDRESS";
	mField[6] = "PHONE NUMBER";
	mField[7] = "BIRTHDAY DATE";
	mField[8] = "FAVORITE MEAL";
	mField[9]  = "UNDERWEAR COLOR";
	mField[10] = "DARKEST SECRET";
}

int		PhoneBook::AddContact(void)
{
	int			ret = 0;

	if (mIndex >= 8)
	{
		std::cout << "MEMORY IS FULL!" << std::endl;
		ret = 1;
	}
	else
	{
		std::cout << "TYPE YOUR DATA BELOW!" << std::endl;
		for (int i = 0; i < 11; i++)
		{
			std::string str;

			std::cout << std::setw(15) << mField[i] << " : ";
			if (std::getline(std::cin, str).eof())
			{
				return (ret);
			}
			mContact[mIndex].SetDataByIndex(i, str);
		}
		std::cout << "YOUR DATA WAS SUCCESSFULLY ADDED!" << std::endl;
		mIndex++;
		ret = 1;
	}
	return (ret);
}

int		PhoneBook::ShowContact(void)
{
	int	ret = 0;

	if (mIndex == 0)
	{
		std::cout << "NO DATA IN MEMORY! ADD FIRST!" << std::endl;
	}
	else
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
		for (int i = 0; i < mIndex; i++)
		{
			std::cout << "|";
			std::cout << std::setw(10) << i + 1 << "|";
			for (int j = 0; j < 3; j++)
			{
				std::string	str(mContact[i].GetDataByIndex(j));

				if (str.length() > 10)
				{
					str = str.substr(0, 9) + ".";
				}
				std::cout << std::setw(10) << str << "|";
			}
			std::cout << std::endl;
		}
		std::cout << "|-------------------------------------------|" << std::endl;

		if (mIndex < 0)
		{
			std::cout << "NO DATA IN MEMORY! ADD FIRST!" << std::endl;
		}
		else
		{
			std::cout << "TYPE INDEX FOR DETAIL!" << std::endl;
			
			std::string	str;
			int			typingIndex;

			while (true)
			{
				std::cout << ">> ";
				if (std::getline(std::cin, str).eof())
				{
					return (ret);
				}
				std::stringstream(str) >> typingIndex;
				if (typingIndex > 0 && typingIndex < mIndex + 1)
				{
					showContactByIndex(typingIndex - 1);
					break ;
				}
				else
				{
					std::cout << "INVALID INDEX! TYPE BETWEEN 1 ~ " << mIndex << std::endl; 
				}
			}
		}
	}
	ret = 1;
	return (ret);
}

void	PhoneBook::showContactByIndex(const int index) const
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << std::setw(15) << mField[i] << " : " << mContact[index].GetDataByIndex(i) << std::endl;
	}
}