/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:22:42 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/17 13:35:34 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"

int main (void){
	ClapTrap Knight("Knight");
	ClapTrap Beast;

	std::cout << std::endl;
	for (int i = 0; i < 20; i++)
		Knight.attack(Beast.getName());
	std::cout << std::endl;
	
	Beast.takeDamage(Knight.getAttackDamage());
	Beast.beRepaired(2);
	std::cout << std::endl;
	
	Knight.takeDamage(8);
	Beast.takeDamage(4);
	Beast.beRepaired(5);
	Knight.beRepaired(3);
	std::cout << std::endl;
	
	return (0);
}