/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:46:25 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 16:35:16 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <fstream>

# include "../incs/Bureaucrat.hpp"

class Bureaucrat;

class AForm {

    private:
        const std::string   _name;
        bool                _signedStatus;
        const int           _gradeToSign;  
        const int           _gradeToExecute;
        
    public:
		AForm();
		AForm (const std::string name, int gradeToSign, int gradeToExecute);
		AForm(const AForm & src);
		AForm &operator=(const AForm & src);
		virtual ~AForm();

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
        virtual void        execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm & src);

#endif 