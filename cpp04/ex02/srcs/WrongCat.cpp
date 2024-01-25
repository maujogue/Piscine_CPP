/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:25:26 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/18 14:40:07 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongCat.hpp"

WrongCat::WrongCat( void ) {
	this->type = "WrongCat";
	std::cout << "Created " << this->type << std::endl;
}

WrongCat::~WrongCat( void ){
	std::cout << "Deleted " << this->type << std::endl;
}

WrongCat::WrongCat (const WrongCat & src) {
	this->type = src.type;
}

WrongCat &WrongCat::operator=(const WrongCat & src){
	this->type = src.type;
	return (*this);
}

void WrongCat::makeSound( void ) const {
	std::cout << "Miaouuuu grrrrr!" << std::endl;
}