#include "Convert.hpp"

enum Type
{
	IMPOSSIBLE,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

Convert::Convert(void)
	: mType(0)
	, mChar(0)
	, mInt(0)
	, mFloat(0)
	, mDouble(0)
{
}

Convert::Convert(const std::string& value)
	: mType(0)
	, mChar(0)
	, mInt(0)
	, mFloat(0)
	, mDouble(0)
{
	SetType(value);
	if (mType == FLOAT)
	{
		SetFloat(stof(value));
	}
}

Convert::Convert(const Convert& other)
{
	*this = other;
}

Convert::~Convert(void)
{
}

Convert&			Convert::operator=(const Convert& other)
{
	mType = other.mType;
	mChar = other.mChar;
	mInt = other.mInt;
	mFloat = other.mFloat;
	mDouble = other.mDouble;
	return (*this);
}

void				Convert::SetType(const std::string& value)
{
	if (value.length() == 1)
	{
		if (isdigit(value.at(0)))
		{
			mType = INT;
			return ;
		}
		mType = CHAR;
		return ;
	}
	std::string		pseudoLiterals[8] = {"inff", "-inff", "+inff", "nanf", "inf", "-inf", "+inf", "nan"};
	bool			isPseudoLiterals = false;
	std::size_t		found = value.find('.');

	for (int i = 0; i < 8; i++)
	{
		if (value.compare(pseudoLiterals[i]) == 0)
		{
			isPseudoLiterals = true;
		}
	}
	if (found != std::string::npos || isPseudoLiterals == true)
	{
		for (int i = 0; i < 4; i++)
		{
			if (value.compare(pseudoLiterals[i]) == 0)
			{
			std::cout << "float value" << std::endl;
				mType = FLOAT;
				return ;
			}
		}
		for (int i = 4; i < 8; i++)
		{
			if (value.compare(pseudoLiterals[i]) == 0)
			{
			std::cout << "double value" << std::endl;
				mType = DOUBLE;
				return ;
			}
		}
		if (value.at(value.length() - 1) == 'f')
		{
			std::cout << "float value" << std::endl;
			mType = FLOAT;
			return ;
		}
		else
		{
			std::cout << "double value" << std::endl;
			mType = DOUBLE;
			return ;
		}
	}
	else
	{
		//   O,  O,  X ,  X
		// +42, 42, 42+, 4-2
		if (isdigit(value.at(0)))
		{
			// without sign
			found = value.find_first_not_of("0123456789");
			if (found != std::string::npos)
			{
				std::cout << "wierd in without sign????????????" << std::endl;
				mType = IMPOSSIBLE;
				return ;
			}
			else
			{
				std::cout << "isit explicitly int number" << std::endl;
				mType = INT;
				return ;
			}
		}
		else
		{
			// with sign
			// +42+, -42-, a42
			if (value.at(0) != '+' || value.at(0) != '-')
			{
				std::cout << "first char is not sign a42????????????" << std::endl;
				mType = IMPOSSIBLE;
				return ;
			}
			found = value.find_first_not_of("0123456789", 1);
			if (found != std::string::npos)
			{
				std::cout << "wierd with sign????????????" << std::endl;
				mType = IMPOSSIBLE;
				return ;
			}
			else
			{
				std::cout << "isit explicitly int number" << std::endl;
				mType = INT;
				return ;
			}
		}
	}
	mType = IMPOSSIBLE;
}

void				Convert::SetChar(const std::string& value)
{
	mChar = std::stoi(value);
}

void				Convert::SetInt(const std::string& value)
{
	mInt = std::stoi(value);
}

void				Convert::SetFloat(const float& value)
{
	mFloat = value;
}

void				Convert::SetDouble(const std::string& value)
{
	mDouble = std::stod(value);

}

const int&			Convert::GetType(void) const
{
	return (mType);
}

const char&			Convert::GetChar(void) const
{
	return (mChar);
}

const int&			Convert::GetInt(void) const
{
	return (mInt);
}

const float&		Convert::GetFloat(void) const
{
	return (mFloat);
}

const double&		Convert::GetDouble(void) const
{
	return (mDouble);
}

std::ostream&		operator<<(std::ostream& os, const Convert& value)
{
	std::stringstream	ss;

	if (value.GetType() == CHAR)
	{
		// os << "char: ";
		// os << "int: ";
		// os << "float: ";
		// os << "double: ";
	}
	else if (value.GetType() == INT)
	{
		// os << "char: ";
		// os << "int: ";
		// os << "float: ";
		// os << "double: ";
		
	}
	else if (value.GetType() == FLOAT)
	{
		os << "char: " << "'" << static_cast<char>(value.GetFloat()) << "'" << std::endl;
		os << "int: " << static_cast<int>(value.GetFloat()) << std::endl;
		os << "float: ";
		ss << static_cast<float>(value.GetFloat());
		if (ss.str().find('.') == std::string::npos)
		{
			ss << ".0";
		}
		ss << "f";
		os << ss.str() << std::endl;
		ss.str(std::string());
		ss.clear();
		os << "double: ";
		ss << static_cast<double>(value.GetFloat());
		if (ss.str().find('.') == std::string::npos)
		{
			ss << ".0";
		}
		os << ss.str() << std::endl;
		ss.str(std::string());
		ss.clear();
	}
	else if (value.GetType() == DOUBLE)
	{
		// os << "char: ";
		// os << "int: ";
		// os << "float: ";
		// os << "double: ";
	}

	return (os);
}