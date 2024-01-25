/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:38:07 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 10:58:21 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Ice.hpp"

Ice::Ice ( void ){
	this->type = "ice";
	std::cout << "Created " << this->type << std::endl;
}

Ice::Ice ( std::string const &type ){
	this->type = type;
	std::cout << "Created " << this->type << std::endl;
}

Ice::Ice ( Ice const & src){
	this->type = src.type;
	std::cout << "Created " << this->type << std::endl;
}

Ice &Ice::operator=(Ice const & src){
	this->type = src.type;
	return (*this);
}

Ice*	Ice::clone( void ) const {
	Ice *copy = new Ice(this->type);
	return (copy);
}

void Ice::use( ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice( void ){
	std::cout << "Destructed " << this->type << std::endl;
}