/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:10:33 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/17 10:56:16 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed( void ){
	std::cout << "Default constructor called" << std::endl;
	this->_nb = 0;
}

Fixed::Fixed( const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nb = nb << this->_fracBits;
	return ;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
    this->_nb = nb * (1 << _fracBits);
	return ;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & rhs)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return (*this);
}

std::ostream& operator<<( std::ostream &out, Fixed const & src)
{
	out << src.toFloat() ;
	return (out);
}

int	Fixed::getRawBits( void ) const
{
	return (this->_nb);
}

void	Fixed::setRawBits( int const nb )
{
	this->_nb = nb;
}

int Fixed::toInt( void ) const
{
	return (this->_nb >> this->_fracBits);
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->_nb) / (1 << _fracBits)); //multiplie par 2 puissance fracbits
}