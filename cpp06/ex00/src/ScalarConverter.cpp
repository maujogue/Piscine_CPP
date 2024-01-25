/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter..cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:50:07 by maujogue          #+#    #+#             */
/*   Updated: 2023/11/27 14:50:07 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::convert(std::string str){
	char c;
	float f;
	int i;

	if (!std::isprint(str[0])) 										// check for non-displayable char :	error
	{
		std::cout << "Literal must be displayable." << std::endl;
		return ;
	}
	if (str.find('.') != str.rfind('.') || str.find(',') != std::string::npos) 							//check for double point : error
	{
		std::cout << "Error: invalid argument." << std::endl;
		return ;
	}
	double d = std::atof(str.c_str());
	if (d != d) 													//check for nan : error
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << d << std::endl;
		std::cout << "double: " << d << std::endl;
		return ;
	}
	if (d == 0 && !std::isdigit(str[0]) && str.size() > 1) 			//check if str is a string : error
	{
		std::cout << "Error: invalid argument." << std::endl;
		return ;
	}
	else if (d == 0 && !std::isdigit(str[0])) 						//check if str is a char
	{
		c = str[0];
		d = static_cast<double>(c);
		i = static_cast<int>(c);
		f = static_cast<float>(c);
	}
	else															//if str is an int, float or double
	{
		i = static_cast<int>(d);
		f = static_cast<float>(d);
		c = static_cast<char>(i);
	}

	//print results and check for limits/non-displayable
	if (!std::isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;

	if (d < INT_MIN || d > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;

	if (f < -FLT_MAX || f > FLT_MAX)
		std::cout << "float: impossible" << std::endl;
	else if (static_cast<float>(i) == f)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;

	if (d < -DBL_MAX || d > DBL_MAX)
		std::cout << "double: impossible" << std::endl;
	else if (static_cast<double>(i) == d)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}
