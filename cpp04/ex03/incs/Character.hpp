/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:50:48 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 15:06:26 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria*	_inventory[4];
		AMateria**	_trash;
		int			_nbTrash;

	public:
		Character( void );
		Character( const std::string name );
		Character( const Character & src);
		Character &operator=( const Character & src);
		
		~Character( void );

		std::string const & getName() const;
		void equip( AMateria* m );
		void unequip( int idx );
		void use( int idx, ICharacter& target );
		int	getEmptySlotIndex( void );
		int	alreadyInInventory(AMateria* src);
};


#endif