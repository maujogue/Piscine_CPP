/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:15:38 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 10:46:04 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice(std::string const & type);
		Ice(Ice const & src);
		Ice &operator=(const Ice & src);
		~Ice( void );

	Ice*	clone( void ) const ;
	void	use( ICharacter& target);
};

#endif