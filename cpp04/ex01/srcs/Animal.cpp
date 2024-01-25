/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:25:02 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/19 10:36:17 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"

Animal::Animal( void ) : type("Animal") {
	std::cout << "Created Animal" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Deleted Animal" << std::endl;
}

Animal::Animal( const Animal & src) : type(src.type){}

Animal &Animal::operator=(const Animal & src){
	this->type = src.type;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "..." << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}