/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:46:25 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 16:35:04 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

# include "../incs/Bureaucrat.hpp"

class Bureaucrat;

class Form {

    private:
        const std::string   _name;
        bool                _signedStatus;
        const int           _gradeToSign;  
        const int           _gradeToExecute;
        
    public:
		Form();
		Form (const std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form & src);
		Form &operator=(const Form & src);
		~Form();

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };

        const std::string	getName () const;
        bool            	getSigned () const;
        int	                getGradeToSign () const;
        int	                getGradeToExecute () const;

		void	            beSigned (const Bureaucrat & bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form & src);

#endif 