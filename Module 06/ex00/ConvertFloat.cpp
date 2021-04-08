#include "ConvertFloat.hpp"

ConvertFloat::ConvertFloat(void)
    : Convert()
{
}

ConvertFloat::ConvertFloat(const std::string& str)
    : Convert(str)
{
    if (GetType() == CHAR)
    {
        try
        {
            mValue = static_cast<char>(std::stoi(str));
        }
        catch(const std::exception& e)
        {
            if (str.length() == 1)
            {
                mValue = str.at(0);
            }
        }
    }
    else if (GetType() == INT)
    {
        mValue = static_cast<float>(std::atol(str.c_str()));
    }
    else if (GetType() == FLOAT)
    {
        mValue = static_cast<float>(std::stof(str));
    }
    else if (GetType() == DOUBLE)
    {
        mValue = static_cast<float>(std::stod(str));
    }
    else
    {
        throw ImpossibleException();
    }
}

ConvertFloat::ConvertFloat(const ConvertFloat& other)
    : Convert(other)
{
    *this = other;
}

ConvertFloat::~ConvertFloat(void)
{
}

ConvertFloat&    ConvertFloat::operator=(const ConvertFloat& other)
{
    mValue = other.mValue;
    return (*this);
}

float            ConvertFloat::GetValue(void) const
{
    return (mValue);
}