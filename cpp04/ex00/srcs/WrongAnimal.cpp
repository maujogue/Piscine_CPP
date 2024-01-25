/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:25:02 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/18 14:37:48 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") {
	std::cout << "Created " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Deleted " << this->type << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "..." << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return (this->type);
}