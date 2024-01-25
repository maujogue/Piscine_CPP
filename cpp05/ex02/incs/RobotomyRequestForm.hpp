/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:46:22 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 13:02:39 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm : public AForm {
    private:
        std::string _target;
        
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string & target );
        RobotomyRequestForm(const RobotomyRequestForm &src);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(RobotomyRequestForm const & src);
        virtual void    execute(Bureaucrat const & executor) const;
};

#endif