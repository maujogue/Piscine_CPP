/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:02:11 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/09 10:50:53 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Harl.hpp"



void	Harl::_debug( void )
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money." << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free." << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level)
{
	std::string msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	
	while (i < 4 && msg[i] != level)
		i++;
	switch(i){
		case 0:
			this->_debug();
		case 1:
			this->_info();
		case 2:
			this->_warning();
		case 3:
			this->_error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
	

}

