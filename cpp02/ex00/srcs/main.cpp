/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:13:34 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/17 10:53:49 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

int main(void)
{
	Fixed a;
	
	std::cout << std::endl;

	Fixed b( a );

	std::cout << std::endl;

	Fixed c;

	std::cout << std::endl;
	
	c = b;

	std::cout << std::endl;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	c.setRawBits(7);
	std::cout << c.getRawBits() << std::endl;
	
	a.setRawBits(19);
	std::cout << a.getRawBits() << std::endl;

	b.setRawBits(-1);
	std::cout << b.getRawBits() << std::endl;
	
	std::cout << std::endl;
	
	return 0;
}