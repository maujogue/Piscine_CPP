/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:55:18 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/17 14:22:42 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"
#include "../incs/ScavTrap.hpp"

ScavTrap::ScavTrap ( void ) : ClapTrap(){
	std::cout << "ScavTrap " << this->_name << " was created" << std::endl;
}

ScavTrap::ScavTrap(const std::string & name ) : ClapTrap(name) {
	this->_name = name;
	this->_hitPoints = 100; 
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << name << " was created" << std::endl;
}

ScavTrap::~ScavTrap ( void ){
	std::cout << "ScavTrap " << this->_name << " was destroyed" << std::endl;
}

void ScavTrap::guardGate( void ){
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode !" << std::endl; 
}

void ScavTrap::attack(const std::string & target){

	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " doesn't have enough energy points to attack !" << std::endl;
		return ;
	}
		
	this->_energyPoints--;
	
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackDamage << " points of damage !";
	std::cout << std::endl;
}
