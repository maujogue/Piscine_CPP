/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:25:02 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 16:29:14 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"

Animal::Animal( void ) : type("Animal") {
	std::cout << "Created Animal"<< std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Deleted Animal" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "..." << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}