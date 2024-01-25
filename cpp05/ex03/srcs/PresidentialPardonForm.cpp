/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:55:53 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 11:34:36 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("Void") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target ) : AForm("PresidentialPardonForm", 25, 5),
    _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src), _target(src._target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & src){
    this->_target = src._target;
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() <= static_cast<unsigned int>(this->getGradeToExecute()) && this->getSigned() == true)
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;  
    else
        throw PresidentialPardonForm::GradeTooLowException();
}
