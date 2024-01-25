/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:07:57 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/11 11:10:58 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		int					_nb;
		static const int	_frac;
			
	public:
		Fixed( void );
		Fixed(Fixed const & src);

		Fixed & operator=( Fixed const & rhs);
		
		~Fixed( void );
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};


#endif