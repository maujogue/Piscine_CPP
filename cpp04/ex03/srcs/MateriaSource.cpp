/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:27:57 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 16:19:12 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource ( void ) : _oldestMateriaIndex(0){
	std::cout << "Created MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_brain[i] = NULL;
}

MateriaSource::MateriaSource ( MateriaSource const & src){
	this->_oldestMateriaIndex = src._oldestMateriaIndex;
	std::cout << "Created MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_brain[i];
		this->_brain[i] = src._brain[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const & src){
	this->_oldestMateriaIndex = src._oldestMateriaIndex;
	for (int i = 0; i < 4; i++)
	{
		delete this->_brain[i];
		this->_brain[i] = src._brain[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_brain[i];
}

void MateriaSource::learnMateria(AMateria *m){
	for (int i = 0; i < 4; i++)
		if (_brain[i] == NULL)
		{
			_brain[i] = m;
			return ;
		}
	delete	_brain[_oldestMateriaIndex];
	_brain[_oldestMateriaIndex] = m;
	_oldestMateriaIndex++;
	if (_oldestMateriaIndex == 4)
		_oldestMateriaIndex = 0;
	std::cout << "Learned " << m->getType() << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
		if( _brain[i] && _brain[i]->getType() == type)
			return (this->_brain[i]->clone());
	return (0);
}