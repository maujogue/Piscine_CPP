/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:10:33 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/17 11:08:34 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

const int Fixed::_fracBits = 8;

//-----------------------------Constructors------------------------------------

Fixed::Fixed( void ){
	this->_nb = 0;
}

Fixed::Fixed( const int nb)
{
	this->_nb = nb << this->_fracBits;
	return ;
}

Fixed::Fixed(const float nb)
{
    this->_nb = nb * (1 << _fracBits);
	return ;
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
	return ;
}

Fixed::~Fixed( void ){
}

//-----------------------------Methods------------------------------------

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
	return (static_cast<float>(this->_nb) / (1 << _fracBits));
}

Fixed & Fixed::min(Fixed &n1, Fixed &n2){
	return (n1 < n2 ? n1 : n2);
}

Fixed & Fixed::max(Fixed &n1, Fixed &n2){
	return (n1 > n2 ? n1 : n2);
}

const Fixed & Fixed::min(const Fixed &n1, const Fixed &n2){
	return (n1 < n2 ? n1 : n2);
}

const Fixed & Fixed::max(const Fixed &n1, const Fixed &n2){
	return (n1 > n2 ? n1 : n2);
}

//--------------------------Operators -------------------------------


Fixed &	Fixed::operator=( Fixed const & rhs) {
	this->setRawBits(rhs.getRawBits());
	return (*this);
}

Fixed Fixed::operator+( Fixed const & rhs) {
	Fixed res(this->toFloat() + rhs.toFloat());
	return (res);
}

Fixed Fixed::operator-( Fixed const & rhs) {
	Fixed res(this->toFloat() - rhs.toFloat());
	return (res);
}

Fixed Fixed::operator*( Fixed const & rhs) {
	Fixed res(this->toFloat() * rhs.toFloat());
	return (res);
}

Fixed Fixed::operator/( Fixed const & rhs) {
	Fixed res(this->toFloat() / rhs.toFloat());
	return (res);
}

Fixed & Fixed::operator++( void ) {
	this->_nb++;
	return (*this);
}

Fixed & Fixed::operator--( void ) {
	this->_nb--;
	return (*this);
}

Fixed Fixed::operator++( int ) {
	Fixed temp(*this);

	this->_nb++;
	return (temp);
}

Fixed Fixed::operator--( int ) {
	Fixed temp(*this);

	this->_nb--;
	return (temp);
}

int	Fixed::operator>( Fixed const & rhs) const {
	return (this->getRawBits() > rhs.getRawBits());
}

int	Fixed::operator<( Fixed const & rhs) const {
	return (this->getRawBits() < rhs.getRawBits());
}

int	Fixed::operator>=( Fixed const & rhs) const {
	return (this->getRawBits() >= rhs.getRawBits());
}

int	Fixed::operator<=( Fixed const & rhs) const {
	return (this->getRawBits() <= rhs.getRawBits());
}

int	Fixed::operator==( Fixed const & rhs) const {
	return (this->getRawBits() == rhs.getRawBits());
}

int	Fixed::operator!=( Fixed const & rhs) const {
	return (this->getRawBits() != rhs.getRawBits());
}

std::ostream& operator<<( std::ostream &out, Fixed const & src) {
	out << src.toFloat() ;
	return (out);
}