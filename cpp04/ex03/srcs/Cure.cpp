/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:38:27 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 10:58:29 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cure.hpp"

Cure::Cure ( void) {
	this->type = "cure";
	std::cout << "Created " << this->type << std::endl;
}

Cure::Cure ( std::string const &type ){
	this->type = type;
	std::cout << "Created " << this->type << std::endl;
}

Cure::Cure ( Cure const & src){
	this->type = src.type;
	std::cout << "Created " << this->type << std::endl;
}

Cure &Cure::operator=(Cure const & src){
	this->type = src.type;
	return (*this);
}

Cure*	Cure::clone( void ) const {
	Cure *copy = new Cure(this->type);
	return (copy);
}

void Cure::use( ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure( void ){
	std::cout << "Destructed " << this->type << std::endl;
}