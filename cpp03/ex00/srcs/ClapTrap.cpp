/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:22:15 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/17 14:17:00 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Default Claptrap created" << std::endl;
}

ClapTrap::ClapTrap(const std::string & name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src ){
	*this = src;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & src){
	this->_hitPoints = src._hitPoints;
	this->_name = src._name;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap( void ){
	std::cout << "Claptrap " << this->_name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string & target){

	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "Not enough energy points to attack !" << std::endl;
		return ;
	}
		
	this->_energyPoints--;
	
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackDamage << " points of damage !";
	std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	
	std::cout << "ClapTrap " << this->_name << " took " << amount;
	std::cout << " points of damage ! He now has " << this->_hitPoints << " hitpoints left.";
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "Not enough energy points to get repaired !" << std::endl;
		return ;
	}
	this->_hitPoints += amount;

	this->_energyPoints--;
		
	std::cout << "ClapTrap " << this->_name << " repaired itself, gaining ";
	std::cout << amount << " points of health back ! He now has " << this->_hitPoints << " hitpoints left.";
	std::cout << std::endl;
}

unsigned int	ClapTrap::getAttackDamage( void ){
	return (this->_attackDamage);
}

std::string	ClapTrap::getName( void ){
	return (this->_name);
}