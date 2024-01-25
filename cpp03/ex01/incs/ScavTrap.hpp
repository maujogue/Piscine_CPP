/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:20:06 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/17 14:08:38 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	private:
		
	public:
		
		ScavTrap( void );	
		ScavTrap( const std::string & name ) ;
		ScavTrap(const ScavTrap & src);

		ScavTrap & operator=(const ScavTrap &src);

		~ScavTrap( void );

		void	attack(const std::string & target);
		void	guardGate( void );
};

#endif