/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:15:38 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 16:44:59 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "../incs/ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
		
	public:
		AMateria( void );
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		AMateria &operator=(const AMateria & src);
		virtual ~AMateria( void );
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif