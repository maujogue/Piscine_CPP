/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:47 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 16:14:00 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Character.hpp"

Character::Character() : _name("Default Character"),_trash(NULL), _nbTrash(0){
	std::cout << "Character " << this->_name << " created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const std::string name) : _name(name),_trash(NULL), _nbTrash(0){
	std::cout << "Character " << this->_name << " created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character & src) : _name(src._name), _nbTrash(src._nbTrash){
	std::cout << "Character " << this->_name << " created" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	for (int i = 0; i < _nbTrash - 1; i++)
		this->_trash[i] = src._trash[i]->clone();
}

Character &Character::operator=(const Character & src){
	this->_name = src._name;
	this->_nbTrash = src._nbTrash;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	for (int i = 0; i < _nbTrash - 1; i++)
		this->_trash[i] = src._trash[i]->clone();
	return (*this);
}

Character::~Character(){
	std::cout << "Character " << this->_name << " destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	for (int i = 0; i < _nbTrash; i++)
		delete this->_trash[i];
	delete [] this->_trash;
}

void Character::use(int adx, ICharacter & target){
	if (adx < 0 || adx > 3 || this->_inventory[adx] == NULL)
		std::cout << "Error : invalid inventory index" << std::endl;
	else
		this->_inventory[adx]->use(target);
}

void Character::equip(AMateria* m){
	int	index = getEmptySlotIndex();
	if (m == NULL)
		std::cout << "Error : can't equip an Unknown Materia" << std::endl;
	else if (alreadyInInventory(m))
		std::cout << m->getType() << " is already in " << this->_name << "'s inventory !" << std::endl;
	else if ( index != -1)
	{
		this->_inventory[index] = m;
		std::cout << "Equiped '" << this->_name << "' with '" << m->getType();
		std::cout << "' in slot [" << index << "]"<< std::endl;
	}
	else
		std::cout << this->_name << "'s Inventory is full!" << std::endl;;
}

void Character::unequip(int idx){
	if (this->_inventory[idx] == NULL)
		std::cout << "Error : invalid inventory index" << std::endl;
	else
	{
		AMateria** tempTrash = this->_trash;
		delete this->_trash;
		this->_nbTrash++;
		this->_trash = new AMateria*[_nbTrash];
		for (int i = 0; i < _nbTrash - 1; i++)
			this->_trash[i] = tempTrash[i];
		this->_trash[_nbTrash - 1] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
		std::cout << "Unequiped slot [" << idx << "] of " << this->_name << "'s inventory" << std::endl;
	}
}

std::string const & Character::getName() const {
	return (this->_name);
}

int	Character::getEmptySlotIndex( void ) {
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] == NULL)
			return (i);
	return (-1);
}

int	Character::alreadyInInventory(AMateria* src){
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] == src)
			return (1);
	return (0);
}
