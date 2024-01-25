/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:54:53 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/05 14:07:35 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    
    private:
		Weapon		*_weapon;
		std::string _name;
		
    public:
		HumanB(std::string name);
		~HumanB();
        void	attack( void ) const;
		void	setWeapon(Weapon &weapon);
};

#endif