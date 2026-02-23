#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &cp) 
{
	(void) cp;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void) obj;
	return (*this);
}

int count_occurences(std::string value, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(value[i])
	{
		if (value[i] == c)
			count++;
		i++;
	}
	return (count);
}

int detectType(std::string value)
{
	int pos;
	if (value == "+inff" || value == "-inff" || value == "nanf" || value == "inff")
		return (5);
	if (value == "+inf" || value == "-inf" || value == "nan" || value == "inf")
		return (5);
	//*********** CHARS
	if (value.length() == 1 && !isdigit(value[0]))
		return (1);
	//*********** INTEGERS
	if (value[0] == '+' || value[0] == '-' || isdigit(value[0]))
	{
		if ((value[0] == '+' || value[0] == '-') && value.length() == 1)
			return (0);
		if (value.find('.') == std::string::npos && value[value.length() - 1] != 'f')
		{
			pos = 1;
			while(value[pos])
			{
				if (!isdigit(value[pos]))
					return (0);
				pos++;
			}
			return (2);
		}
	}
	//*********** FLOATS
	if (value[0] == '+' || value[0] == '-' || isdigit(value[0]) || value[0] == '.')
	{
		if ((value[0] == '+' || value[0] == '-') && value.length() == 1)
			return (0);
		if (value.find('.') != std::string::npos && value[value.length() - 1] == 'f')
		{
			if (count_occurences(value, '.') != 1 || count_occurences(value, 'f') != 1)
				return (0);
			pos = 1;
			while(value[pos])
			{
				if (value[pos] == '.' || value[pos] == 'f')
				{
					pos++;
					continue ;
				}
				else if (!isdigit(value[pos]))
					return (0);
				pos++;
			}
			return (3);
		}
	}
	//*********** DOUBLES
	if (value[0] == '+' || value[0] == '-' || isdigit(value[0]) || value[0] == '.')
	{
		if ((value[0] == '+' || value[0] == '-') && value.length() == 1)
			return (0);
		if (value.find('.') != std::string::npos)
		{
			if (count_occurences(value, '.') != 1)
				return (0);
			if (value[value.length() - 1] == '.')
			{
				if (!isdigit(value[value.length() - 2]))
					return (0);
			}
			pos = 1;
			while(value[pos])
			{
				if (value[pos] == '.')
				{
					pos++;
					continue ;
				}
				else if (!isdigit(value[pos]))
					return (0);
				pos++;
			}
			return (4);
		}
	}
	return (0);
}

void ScalarConverter::convert(std::string value)
{
	int val = detectType(value);
	std::cout << val << std::endl;
}