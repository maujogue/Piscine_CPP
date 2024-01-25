/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:15:36 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 16:45:07 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AMateria.hpp"

AMateria::AMateria( void ) : type("Default"){
	std::cout << "Created Materia" << std::endl;
}

AMateria::AMateria( const AMateria & src){
	this->type = src.type;
	std::cout << "Called materia copy constructor" << std::endl;
}

AMateria::~AMateria( void ) {
	std::cout << "Destroyed Materia" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &src){
	this->type = src.type;
	std::cout << "Called Materia assignment" << std::endl;
	return (*this);
}

std::string const & AMateria::getType() const {
	return (this->type);
}
