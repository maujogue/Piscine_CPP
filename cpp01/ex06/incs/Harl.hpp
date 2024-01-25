/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:59:39 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/09 09:56:55 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
# define HARL_CPP

# include <iostream>

class Harl {
	
	private:
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );

	public:
		
		void	complain( std::string level);
};

#endif