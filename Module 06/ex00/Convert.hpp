#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <sstream>

class Convert
{
public:
	Convert(void);
	Convert(const std::string& str);
	Convert(const Convert& other);
	virtual ~Convert(void);

	Convert&    operator=(const Convert& other);

    const int&  GetType(void) const;

    enum Type
    {
        IMPOSSIBLE,
        CHAR,
        INT,
        FLOAT,
        DOUBLE
    };

	class ImpossibleException : public std::exception
	{
		virtual const char* what(void) const throw();
	};


private:
    void        setType(const std::string& str);
    bool        isTwice(const std::string& str, const char needle) const;

    int         mType;
};

#endif