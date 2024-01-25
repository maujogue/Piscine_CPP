/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:17:03 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 16:32:15 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"
#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/Intern.hpp"

int main (void) {
	try {
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Lab Rat");
		Bureaucrat soldier("soldier", 2);
		soldier.signForm(*rrf);
		soldier.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try {
		std::cout << std::endl;
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("Wrong form", "nobody");
		Bureaucrat soldier("soldier", 2);
		soldier.signForm(*rrf);
		soldier.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}