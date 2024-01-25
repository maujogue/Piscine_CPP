/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:46:22 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 13:19:06 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string _target;
        
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string & target );
        PresidentialPardonForm(const PresidentialPardonForm &src);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(PresidentialPardonForm const & src);
        virtual void    execute(Bureaucrat const & executor) const;
};

#endif