#pragma once

#include <iostream>
#include <string>

class ScalarConverter {
	private :
		virtual void method() const = 0;
	public :
		ScalarConverter();
		ScalarConverter(const ScalarConverter &cp);
		ScalarConverter &operator=(const ScalarConverter &obj);
		~ScalarConverter();
		static  void convert(std::string value);
};

