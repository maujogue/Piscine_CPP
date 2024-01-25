/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:00:15 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/19 11:19:38 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain( const Brain & src) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}

Brain &Brain::operator=(const Brain & src){
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}

std::string	Brain::getIdea(int index){
	return (this->_ideas[index]);
}

void	Brain::setIdea(int index, std::string idea){
	this->_ideas[index] = idea;
}