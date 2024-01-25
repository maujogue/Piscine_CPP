/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:17:03 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 16:18:33 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"
#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"

int main (void) {
	try {
		Bureaucrat Sergeant("Sergeant", 137);
		std:: cout << Sergeant;
		ShrubberyCreationForm tree("Garden");
		Sergeant.signForm(tree);
		Sergeant.executeForm(tree);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat Sergeant("Sergeant", 40);
		std:: cout << Sergeant;
		RobotomyRequestForm robot("Test rat");
		Sergeant.signForm(robot);
		Sergeant.executeForm(robot);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try {
		Bureaucrat Sergeant("Sergeant", 5);
		std:: cout << Sergeant;
		PresidentialPardonForm pardon("Convicted Criminal");
		Sergeant.signForm(pardon);
		Sergeant.executeForm(pardon);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}