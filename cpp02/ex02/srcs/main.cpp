/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:13:34 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/17 11:07:33 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

int main( void ) {
	Fixed a(19);
	Fixed c(19);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "[TESTS FIXED POINTS]" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;
	
	std::cout << "[1] Testing increments" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a -->" << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a -->" << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ -->" << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- -->" << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl;
	
	std::cout << "[2] Testing min/max" << std::endl;
	std::cout << "max(a,b) = "<< Fixed::max( a, b ) << std::endl;
	std::cout << "min(a,b) = "<< Fixed::min( a, b ) << std::endl << std::endl;
	
	std::cout << "[3] Testing operations" << std::endl;
	std::cout << "a * b = "<< a * b << std::endl;
	std::cout << "a / b = "<< a / b << std::endl;
	std::cout << "a + b = "<< a + b << std::endl;
	std::cout << "a - b = "<< a - b << std::endl;
	std::cout << std::endl;
	
	std::cout << "[4] Testing comparisons" << std::endl;
	std::cout << "a < b = "<< (a < b) << std::endl;
	std::cout << "a > b = "<< (a > b) << std::endl;
	std::cout << "a <= b = "<< (a <= b) << std::endl;
	std::cout << "a >= b = "<< (a >= b) << std::endl;
	std::cout << "a == b = "<< (a == b) << std::endl;
	std::cout << "a == c = "<< (a.toInt() == c.toInt()) << std::endl;
	std::cout << "a != b = " << (a != b) << std::endl;
	return 0;
}