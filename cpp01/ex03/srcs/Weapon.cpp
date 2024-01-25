/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:54:26 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/05 14:07:13 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"

Weapon::Weapon(std::string type) :_type(type){}

Weapon::~Weapon() {}

const std::string&	Weapon::getType( void ) const
{
	return (this->_type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}