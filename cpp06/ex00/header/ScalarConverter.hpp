//
// Created by maujogue on 11/27/23.
//

#ifndef CPP06_SCALARCONVERTER_HPP
#define CPP06_SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <limits.h>
#include <cfloat>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter &operator=(const ScalarConverter &rhs);
		~ScalarConverter();

	public:
		static void	convert(const std::string str);
};
#endif //CPP06_SCALARCONVERTER_HPP
