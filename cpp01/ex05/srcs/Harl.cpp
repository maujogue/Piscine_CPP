/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:02:11 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/09 10:12:15 by maujogue         ###   ########.fr       */
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
	typedef		void (Harl::*Complain)(void);
	Complain	tab[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i <= 3; i++)
    if (msg[i] == level)
    {
		(this->*(tab[i]))();
        break;
    }
}

