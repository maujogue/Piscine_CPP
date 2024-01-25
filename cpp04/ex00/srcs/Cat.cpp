/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:25:26 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/18 14:40:07 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"

Cat::Cat( void ) {
	this->type = "Cat";
	std::cout << "Created " << this->type << std::endl;
}

Cat::~Cat( void ){
	std::cout << "Deleted " << this->type << std::endl;
}

void Cat::makeSound( void ) const {
	std::cout << "Miaouuuu grrrrr!" << std::endl;
}