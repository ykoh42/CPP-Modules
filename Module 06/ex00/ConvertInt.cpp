#include "ConvertInt.hpp"

ConvertInt::ConvertInt(void)
    : Convert()
{
}

ConvertInt::ConvertInt(const std::string& str)
    : Convert(str)
{
    if (GetType() == CHAR)
    {
        try
        {
            mValue = static_cast<int>(std::stoi(str));
        }
        catch(const std::exception& e)
        {
            if (str.length() == 1)
            {
                mValue = static_cast<int>(str.at(0));
            }
        }
    }
    else if (GetType() == INT)
    {
        mValue = static_cast<int>(std::stoi(str));
    }
    else if (GetType() == FLOAT)
    {
        std::string		    pseudoLiterals[8] = {"inff", "-inff", "+inff", "nanf", "inf", "-inf", "+inf", "nan"};
        std::stringstream   ss;
        float               tmp = std::stof(str);
        ss << tmp;
        for (int i = 0; i < 8; i++)
        {
            if (ss.str().compare(pseudoLiterals[i]) == 0)
            {
                throw ImpossibleException();
            }
        }
        mValue = static_cast<int>(tmp);
        if (mValue == std::numeric_limits<int>::min())
        {
            if (tmp != std::stod("-2147483648"))
            {
                throw ImpossibleException();
            }
        }
    }
    else if (GetType() == DOUBLE)
    {
        std::string		    pseudoLiterals[8] = {"inff", "-inff", "+inff", "nanf", "inf", "-inf", "+inf", "nan"};
        std::stringstream   ss;
        double              tmp = std::stod(str);
        ss << tmp;
        for (int i = 0; i < 8; i++)
        {
            if (ss.str().compare(pseudoLiterals[i]) == 0)
            {
                throw ImpossibleException();
            }
        }
        mValue = static_cast<int>(tmp);
        if (mValue == std::numeric_limits<int>::min())
        {
            if (tmp != std::stod("-2147483648"))
            {
                throw ImpossibleException();
            }
        }
    }
    else
    {
        throw ImpossibleException();
    }

}

ConvertInt::ConvertInt(const ConvertInt& other)
    : Convert(other)
{
    *this = other;
}

ConvertInt::~ConvertInt(void)
{
}

ConvertInt&    ConvertInt::operator=(const ConvertInt& other)
{
    mValue = other.mValue;
    return (*this);
}

int            ConvertInt::GetValue(void) const
{
    return (mValue);
}