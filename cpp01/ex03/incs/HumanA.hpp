/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:54:56 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/05 14:07:57 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    
    private:
		Weapon		&_weapon;
		std::string _name;
		
    public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
        void	attack( void ) const;
				
};

#endif