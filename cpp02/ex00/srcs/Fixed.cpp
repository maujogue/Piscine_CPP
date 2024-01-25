/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:10:33 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/11 11:11:16 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

const int Fixed::_frac = 8;

Fixed::Fixed( void ){
	std::cout << "Default constructor called" << std::endl;
	this->_nb = 0;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits( int const raw )
{
	this->_nb = raw;
}