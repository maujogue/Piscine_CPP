/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:25:26 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/19 11:39:46 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Created Cat" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat( void ){
	delete this->_brain;
	std::cout << "Deleted Cat" << std::endl;
}

Cat::Cat (const Cat & src) {
	std::cout << "Created Cat" << std::endl;
	type = src.type;
	this->_brain = new Brain();
	*this->_brain = *src._brain;
}

Cat &Cat::operator=(const Cat & src){
	this->type = src.type;
	*this->_brain = *src._brain;
	return (*this);
}

void Cat::makeSound( void ) const {
	std::cout << "Miaouuuu grrrrr!" << std::endl;
}

std::string	Cat::getIdea(int index){
	return (this->_brain->getIdea(index));
}

void	Cat::setIdea(int index, std::string idea){
	this->_brain->setIdea(index, idea);
}