/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:55:14 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/05 14:08:04 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanA.hpp"
#include "../incs/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name){}

HumanA::~HumanA( void ) {}

void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with their "<< this->_weapon.getType() << std::endl;
}

