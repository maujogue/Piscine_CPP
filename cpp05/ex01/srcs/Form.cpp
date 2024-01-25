/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:53:29 by maujogue          #+#    #+#             */
/*   Updated: 2023/11/02 14:06:44 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Form.hpp"

Form::Form ( void ) :  _name("Default"), _signedStatus(false), _gradeToSign(150), _gradeToExecute(150){
    std::cout << "Form " << this->_name << " created" << std::endl;
}

Form::Form (const std::string name, int gradeToSign, int gradeToExecute) :
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

Form::Form (const Form & src) : _name(src._name), _signedStatus(src._signedStatus), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
    std::cout << "Form " << this->_name << " created" << std::endl;
}

Form &Form::operator=(const Form & src) {
    this->_signedStatus = src._signedStatus;
    std::cout << "Form " << this->_name << " created" << std::endl;
    return (*this);
}

Form::~Form () {
     std::cout << "Form " << this->_name << " destroyed" << std::endl;
}

const std::string Form::getName() const {
    return (this->_name);
}

bool Form::getSigned() const {
    return (this->_signedStatus);
}

int Form::getGradeToExecute () const {
    return (this->_gradeToExecute);
}

int Form::getGradeToSign () const {
    return (this->_gradeToSign);
}

std::ostream &operator<<(std::ostream &os, const Form & src){
    os << "[Form '" << src.getName() << "'] - Signed status: " << src.getSigned()\
    << " - Sign grade: " << src.getGradeToSign() << " - Execute grade: " << src.getGradeToExecute() << std::endl;
    return (os);
}

const char* Form::GradeTooHighException::what() const throw (){
	return ("Grade too high !");
}

const char* Form::GradeTooLowException::what() const throw (){
	return ("Grade too low !");
}

void    Form::beSigned(const Bureaucrat & bureaucrat)  {
    if (this->_signedStatus == true)
        std::cout << "Form is already signed!" << std::cout;
    else if (bureaucrat.getGrade() <= static_cast<unsigned int>(this->_gradeToSign))
        this->_signedStatus = true;
    else
        throw GradeTooLowException();
}
