/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:07:57 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/11 17:08:09 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		int					_nb;
		static const int	_fracBits;
			
	public:
		Fixed( void );
		Fixed( const int nb);
		Fixed( const float nb);
		Fixed(Fixed const & src);

		~Fixed( void );
		
		Fixed & operator=( Fixed const & rhs);
		
		int operator>( Fixed const & rhs) const;
		int operator<( Fixed const & rhs) const;
		int operator>=( Fixed const & rhs) const;
		int operator<=( Fixed const & rhs) const;
		int operator==( Fixed const & rhs) const;
		int operator!=( Fixed const & rhs) const;
		
		Fixed operator+( Fixed const & rhs);
		Fixed operator-( Fixed const & rhs);
		Fixed operator*( Fixed const & rhs);
		Fixed operator/( Fixed const & rhs);
		
		Fixed & operator++( void );
		Fixed & operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );
		
		int		toInt( void ) const;
		float	toFloat( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const nb );
		static Fixed & min(Fixed &n1, Fixed &n2);
		static Fixed & max(Fixed &n1, Fixed &n2);
		const static Fixed & min(const Fixed &n1, const Fixed &n2);
		const static Fixed & max(const Fixed &n1, const Fixed &n2);
};

std::ostream & operator<<(std::ostream& out, Fixed const & src);


#endif