#include "ConvertDouble.hpp"

ConvertDouble::ConvertDouble(void)
    : Convert()
{
}

ConvertDouble::ConvertDouble(const std::string& str)
    : Convert(str)
{
    if (GetType() == CHAR)
    {
        mValue = static_cast<double>(std::stoi(str));
    }
    else if (GetType() == INT)
    {
        mValue = static_cast<double>(std::stoll(str));
    }
    else if (GetType() == FLOAT)
    {
        mValue = static_cast<double>(std::stof(str));
    }
    else if (GetType() == DOUBLE)
    {
        mValue = static_cast<double>(std::stod(str));
    }
    else
    {
        throw ImpossibleException();
    }
}

ConvertDouble::ConvertDouble(const ConvertDouble& other)
    : Convert(other)
{
    *this = other;
}

ConvertDouble::~ConvertDouble(void)
{
}

ConvertDouble&    ConvertDouble::operator=(const ConvertDouble& other)
{
    mValue = other.mValue;
    return (*this);
}

double            ConvertDouble::GetValue(void) const
{
    return (mValue);
}