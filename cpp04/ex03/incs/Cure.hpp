/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:15:38 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 10:32:27 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure(std::string const & type);
		Cure(Cure const & src);
		Cure &operator=(const Cure & src);
		~Cure( void );

	Cure*	clone( void ) const ;
	void	use( ICharacter& target);
};

#endif