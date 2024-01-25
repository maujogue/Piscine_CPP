/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:55:21 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/05 14:08:01 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanB.hpp"
#include "../incs/Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name){}

HumanB::~HumanB( void ) {}

void	HumanB::attack( void ) const
{
	std::cout << this->_name << " attacks with their "<< this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
