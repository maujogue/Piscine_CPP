/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:25:02 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/19 10:36:17 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AAnimal.hpp"

AAnimal::AAnimal( void ) : type("AAnimal") {
	std::cout << "Created AAnimal" << std::endl;
}

AAnimal::~AAnimal( void ) {
	std::cout << "Deleted AAnimal" << std::endl;
}

AAnimal::AAnimal( const AAnimal & src) : type(src.type){}

AAnimal &AAnimal::operator=(const AAnimal & src){
	this->type = src.type;
	return (*this);
}

void AAnimal::makeSound() const {
	std::cout << "..." << std::endl;
}

std::string	AAnimal::getType( void ) const {
	return (this->type);
}