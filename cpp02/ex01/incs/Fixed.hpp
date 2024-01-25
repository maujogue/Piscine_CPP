/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:07:57 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/11 14:55:35 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	private:
		int					_nb;
		static const int	_fracBits;
			
	public:
		Fixed( void );
		Fixed( const int nb);
		Fixed( const float nb);
		Fixed(Fixed const & src);

		Fixed & operator=( Fixed const & rhs);
		
		~Fixed( void );
		

		int		toInt( void ) const;
		float	toFloat( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const nb );
};

std::ostream & operator<<(std::ostream& out, Fixed const & src);


#endif