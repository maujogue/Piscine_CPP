/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:25:42 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/19 13:01:27 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"


Dog::Dog( void ) {
	std::cout << "Created Dog" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain;
}

Dog::~Dog( void ) {
	delete this->_brain;
	std::cout << "Deleted Dog" << std::endl;
}

Dog::Dog (const Dog & src) {
	std::cout << "Created Dog" << std::endl;
	this->type = src.type;
	this->_brain = new Brain;
	*_brain = *src._brain;
}

Dog &Dog::operator=(const Dog &src) {
	this->type = src.type;
	*_brain = *src._brain;
	return (*this);
}

void Dog::makeSound( void ) const {
	std::cout << "Wouuuf Wouff!" << std::endl;
}

std::string	Dog::getIdea(int index) {
	return (this->_brain->getIdea(index));
}

void	Dog::setIdea(int index, std::string idea) {
	this->_brain->setIdea(index, idea);
}