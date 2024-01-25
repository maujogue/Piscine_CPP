/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:54:16 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/09 10:26:03 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc == 2)
	{
		std::string msg = argv[1];
		harl.complain(msg);
	}
	else
		std::cout << "Error: Program needs 1 argument" << std::endl;
	return (0);
}