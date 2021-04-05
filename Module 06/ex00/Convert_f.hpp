#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <sstream>

class Convert
{
public:
	Convert(const std::string& value);
	Convert(const Convert& other);
	~Convert(void);

	Convert&			operator=(const Convert& other);

	const int&			GetType(void) const;
	const char&			GetChar(void) const;
	const int&			GetInt(void) const;
	const float&		GetFloat(void) const;
	const double&		GetDouble(void) const;

	class NonDisplayableException : public std::exception
	{
		virtual const char* what(void) const throw();
	};
	
private:
	Convert(void);

	void				SetType(const std::string& value);
	void				SetChar(const char& value);
	void				SetInt(const int& value);
	void				SetFloat(const float& value);
	void				SetDouble(const double& value);

	int					mType;
	char				mChar;
	int					mInt;
	float				mFloat;
	double				mDouble;

};

std::ostream&           operator<<(std::ostream& os, const Convert& value);
#endif