/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:20:39 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 16:13:27 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

Bureaucrat::Bureaucrat ( void ) : _name("Ryan"), _grade(150){
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	else
		std::cout << "Created Bureaucrat " << this->_name << " with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) : _name(name), _grade(grade) {
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	else
	std::cout << "Created Bureaucrat " << this->_name << " with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat ( Bureaucrat const & src) : _name(src._name), _grade(src._grade){
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	else
	std::cout << "Created Bureaucrat " << this->_name << " with grade " << this->_grade << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & src) {
	this->_grade = src._grade;
	std::cout << "Assigned Bureaucrat " << this->_name << " with grade " << this->_grade << std::endl;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const & src){
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return (os);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Destroyed Bureaucrat " << this->_name << std::endl;
}


void	Bureaucrat::incrementGrade( void ){
	if (this->_grade > 1)
	{
		this->_grade--;
		std::cout << "Incremented " << this->_name << "'s grade to " << this->_grade << std::endl;
	}
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade( void ){
	if (this->_grade < 150)
	{
		this->_grade++;
		std::cout << "Decremented " << this->_name << "'s grade to " << this->_grade << std::endl;
	}
	else
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw (){
	return ("Grade too high !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw (){
	return ("Grade too low !");
}

const std::string &Bureaucrat::getName( void ) const {
	return (this->_name);
}

unsigned int Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

void	Bureaucrat::signForm(Form & form){
	if (form.getSigned() == true)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because it is already signed!" << std::endl;
		return ;
	}
	try {
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e){
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}	
}