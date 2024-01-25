/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:55:53 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 11:34:36 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("Void") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target ) : AForm("RobotomyRequestForm", 72, 45),
    _target(target){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src), _target(src._target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & src){
    this->_target = src._target;
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() <= static_cast<unsigned int>(this->getGradeToExecute()) && this->getSigned() == true)
    {        
        std::cout << "drrrrrr-lzzzzzrrrrrrzzzzz-llzzzzrrrrr..." << std::endl;
        std::srand(std::time(NULL));
        if (std::rand() % 2 == 0)
            std::cout << this->_target << " has been robotomized successfully!" << std::endl; 
        else
            std::cout << this->_target << " robotomy failed!" << std::endl; 
    }
    else
        throw RobotomyRequestForm::GradeTooLowException();
}
