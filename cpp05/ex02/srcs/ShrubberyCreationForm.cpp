/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:55:53 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/31 16:16:07 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("Void") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target ) : AForm("ShrubberyCreationForm", 145, 137),
    _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src), _target(src._target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src){
    this->_target = src._target;
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() <= static_cast<unsigned int>(this->getGradeToExecute()) && this->getSigned() == true)
    {        
        std::ofstream outfile((this->_target + "_shrubbery.txt").c_str(), std::ios::out | std::ios::trunc);
        if (!outfile.is_open())
        {
            std::cout << "Error: Can't write " << this->_target << std::endl;
            return ;
        }
        outfile << "                    ___                                                                                                                                            "  << std::endl;
        outfile << "            _,-'''   ''''`--.                        _,-'''   ''''`--.                        _,-'''   ''''`--.                        _,-'''   ''''`--.           "  << std::endl;
        outfile << "            ,-'          __,,-- >                    ,-'          __,,-- >                    ,-'          __,,-- >                    ,-'          __,,-- >       "  << std::endl;
        outfile << "        ,'    __,--'''dF      )                  ,'    __,--'''dF      )                  ,'    __,--'''dF      )                  ,'    __,--'''dF      )         "  << std::endl;
        outfile << "        /   .-'Hb_,--''dF      /                 /   .-'Hb_,--''dF      /                 /   .-'Hb_,--''dF      /                 /   .-'Hb_,--''dF      /        "  << std::endl;
        outfile << "    ,'       _Hb ___dF'-._,-'                ,'       _Hb ___dF'-._,-'                ,'       _Hb ___dF'-._,-'                ,'       _Hb ___dF'-._,-'           "  << std::endl;
        outfile << "    ,'      _,-''''   ''--..__               ,'      _,-''''   ''--..__               ,'      _,-''''   ''--..__               ,'      _,-''''   ''--..__          "  << std::endl;
        outfile << "    (     ,-'                  `.            (     ,-'                  `.            (     ,-'                  `.            (     ,-'                  `.       "  << std::endl;
        outfile << "    `._,'     _   _             ;            `._,'     _   _             ;            `._,'     _   _             ;            `._,'     _   _             ;       "  << std::endl;
        outfile << "    ,'     ,' `-'Hb-.___..._,-'              ,'     ,' `-'Hb-.___..._,-'              ,'     ,' `-'Hb-.___..._,-'              ,'     ,' `-'Hb-.___..._,-'         "  << std::endl;
        outfile << "    <    ,''Hb.-'HH`-.dHF'                   <    ,''Hb.-'HH`-.dHF'                   <    ,''Hb.-'HH`-.dHF'                   <    ,''Hb.-'HH`-.dHF'              "  << std::endl;
        outfile << "    `--'   'Hb  HH  dF'                      `--'   'Hb  HH  dF'                      `--'   'Hb  HH  dF'                      `--'   'Hb  HH  dF'                 "  << std::endl;
        outfile << "            'Hb HH dF                                'Hb HH dF                                'Hb HH dF                                'Hb HH dF                   "  << std::endl;
        outfile << "                'HbHHdF                                  'HbHHdF                                  'HbHHdF                                  'HbHHdF                 "  << std::endl;
        outfile << "                |HHHF                                    |HHHF                                    |HHHF                                    |HHHF                   "  << std::endl;
        outfile << "                |HHH|                                    |HHH|                                    |HHH|                                    |HHH|                   "  << std::endl;
        outfile << "                |HHH|                                    |HHH|                                    |HHH|                                    |HHH|                   "  << std::endl;
        outfile << "                |HHH|                                    |HHH|                                    |HHH|                                    |HHH|                   "  << std::endl;
        outfile << "                |HHH|                                    |HHH|                                    |HHH|                                    |HHH|                   "  << std::endl;
        outfile << "                dHHHb                                    dHHHb                                    dHHHb                                    dHHHb                   "  << std::endl;
        outfile << "            .dFd|bHb.               o                .dFd|bHb.               o                .dFd|bHb.               o                .dFd|bHb.               o   "  << std::endl;
        outfile << "    o       .dHFdH|HbTHb.          o /       o       .dHFdH|HbTHb.          o /       o       .dHFdH|HbTHb.          o /       o       .dHFdH|HbTHb.          o /  "  << std::endl;
        outfile << "    Y  |  __,dHHFdHH|HHhoHHb.__Krogg  Y      Y  |  __,dHHFdHH|HHhoHHb.__Krogg  Y      Y  |  __,dHHFdHH|HHhoHHb.__Krogg  Y      Y  |  __,dHHFdHH|HHhoHHb.__Krogg  Y "  << std::endl;
        outfile << "###################################################################################################################################################################"  << std::endl;
        std::cout << "Planted a few trees in " << this->_target << std::endl;
    }
    else
        throw ShrubberyCreationForm::GradeTooLowException();
}
