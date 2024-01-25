/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:17:29 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 16:35:54 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	
	private:
		const std::string 	_name;
		unsigned int		_grade;

	public:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		Bureaucrat();
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat(const std::string &name, unsigned int grade);
		Bureaucrat &operator=(Bureaucrat const & src);
		~Bureaucrat();

		const std::string 	&getName() const;
		unsigned int 		getGrade() const;

		void				incrementGrade();
		void				decrementGrade();
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const & src);

#endif