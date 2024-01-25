/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:17:03 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/30 14:50:46 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

int main (void) {
	try{
		Bureaucrat Private;
		Private.decrementGrade();
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try{
		Bureaucrat Private;
		Private.incrementGrade();
		std::cout << Private;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		Bureaucrat Sergeant("Sergeant", 2);
		std:: cout << Sergeant;
		Sergeant.incrementGrade();
		Sergeant.incrementGrade();
		std::cout << Sergeant;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		Bureaucrat Sergeant("Sergeant", 2);
		Form Paper("Important Paper", 5, 5);
		Sergeant.signForm(Paper);
		Sergeant.signForm(Paper);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		Bureaucrat Private("Ryan", 150);
		Form Paper("Important Paper", 5, 5);
		Private.signForm(Paper);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Form Paper("Important Paper", 1670, 5);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}