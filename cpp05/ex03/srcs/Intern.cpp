/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:55:28 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 16:23:55 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(Intern const & src){
	(void)src;
}

Intern &Intern::operator=(Intern const & src){
    (void) src;
    return (*this);
}

const char	*Intern::invalidForm::what() const throw() {
	return("Form does not exist!");
}

AForm   *Intern::makeForm(std::string const & formName, std::string const & target){
	std::string formTab[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	int i = 0;
	
	while (i < 3 && formTab[i] != formName)
		i++;
	switch(i){
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
			break;
		default:
			throw Intern::invalidForm();
	}
	return (NULL);
}