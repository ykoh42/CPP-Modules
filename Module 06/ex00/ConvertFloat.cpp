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
        mValue = static_cast<float>(std::stoi(str));
    }
    else if (GetType() == INT)
    {
        mValue = static_cast<float>(std::stoll(str));
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