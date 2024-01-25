/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:55:18 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/17 15:37:17 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"
#include "../incs/FragTrap.hpp"

FragTrap::FragTrap ( void ) : ClapTrap(){
	std::cout << "FragTrap " << this->_name << " was created" << std::endl;
}

FragTrap::FragTrap(const std::string & name ) : ClapTrap(name) {
	this->_name = name;
	this->_hitPoints = 100; 
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << name << " was created" << std::endl;
}

FragTrap::~FragTrap ( void ){
	std::cout << "FragTrap " << this->_name << " was destroyed" << std::endl;
}

void FragTrap::highFivesGuys( void ){
	std::cout << "Can I get a high five guys ? Yes ? C'mon !" << std::endl;
}

void FragTrap::attack(const std::string & target){

	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " doesn't have enough energy points to attack !" << std::endl;
		return ;
	}
		
	this->_energyPoints--;
	
	std::cout << "FragTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackDamage << " points of damage !";
	std::cout << std::endl;
}
