/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:20:06 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/17 15:36:48 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	private:
		
	public:
		
		FragTrap( void );	
		FragTrap( const std::string & name ) ;
		FragTrap(const FragTrap & src);

		FragTrap & operator=(const FragTrap &src);

		~FragTrap( void );

		void 	attack( const std::string & target );
		void 	highFivesGuys(void);
};

#endif