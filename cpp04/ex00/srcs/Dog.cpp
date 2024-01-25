/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:25:42 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/18 14:37:40 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"

Dog::Dog( void ){
	this->type = "Dog";
	std::cout << "Created " << this->type << std::endl;
}

Dog::~Dog( void ){
	std::cout << "Deleted " << this->type << std::endl;
}

void Dog::makeSound( void ) const {
	std::cout << "Wouuuf Wouff!" << std::endl;
}