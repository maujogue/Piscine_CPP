/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:53:29 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/30 15:35:10 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AForm.hpp"

AForm::AForm ( void ) :  _name("Default"), _signedStatus(false), _gradeToSign(150), _gradeToExecute(150){
    std::cout << "Form " << this->_name << " created" << std::endl;
}

AForm::AForm (const std::string name, int gradeToSign, int gradeToExecute) :
    _name(name),
    _signedStatus(false),
    _gradeToSign(gradeToSign),
    _gradeToExecute(gradeToExecute) 
{
    if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
    else if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
    else
        std::cout << "Form " << this->_name << " created" << std::endl;
}

AForm::AForm (const AForm & src) : _name(src._name), _signedStatus(src._signedStatus), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
    std::cout << "Form " << this->_name << " created" << std::endl;
}

AForm &AForm::operator=(const AForm & src) {
    this->_signedStatus = src._signedStatus;
    std::cout << "Form " << this->_name << " created" << std::endl;
    return (*this);
}

AForm::~AForm () {
     std::cout << "Form " << this->_name << " destroyed" << std::endl;
}

const std::string AForm::getName() const {
    return (this->_name);
}

bool AForm::getSigned() const {
    return (this->_signedStatus);
}

int AForm::getGradeToExecute () const {
    return (this->_gradeToExecute);
}

int AForm::getGradeToSign () const {
    return (this->_gradeToSign);
}

std::ostream &operator<<(std::ostream &os, const AForm & src){
    os << "[Form '" << src.getName() << "'] - Signed status: " << src.getSigned()\
    << " - Sign grade: " << src.getGradeToSign() << " - Execute grade: " << src.getGradeToExecute() << std::endl;
    return (os);
}

const char* AForm::GradeTooHighException::what() const throw (){
	return ("Grade too high !");
}

const char* AForm::GradeTooLowException::what() const throw (){
	return ("Grade too low !");
}

void    AForm::beSigned(const Bureaucrat & bureaucrat)  {
    if (this->_signedStatus == true)
        std::cout << "Form is already signed!" << std::cout;
    else if (bureaucrat.getGrade() <= static_cast<unsigned int>(this->_gradeToSign))
        this->_signedStatus = true;
    else
        throw GradeTooLowException();
}
