/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:53:01 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 16:23:16 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
    
    public :
        Intern();
        ~Intern();
        Intern(Intern const & src);
        Intern &operator=(Intern const & src);
        
        class invalidForm : public std::exception {
            public:
                const char* what() const throw();
        };
        
        AForm   *makeForm(std::string const & formName, std::string const & target);
};

#endif