/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:20:06 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/17 13:57:08 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	protected:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		
	public:

		ClapTrap( void );	
		ClapTrap( const std::string & name ) ;
		ClapTrap(const ClapTrap & src);

		ClapTrap & operator=(const ClapTrap &src);

		~ClapTrap( void );
		
		void 			attack(const std::string & target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount); 
		unsigned int	getAttackDamage( void );
		std::string		getName( void );
};

#endif