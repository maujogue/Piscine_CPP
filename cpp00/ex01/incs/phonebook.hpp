/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:21:19 by mathisaujog       #+#    #+#             */
/*   Updated: 2023/10/04 11:25:11 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstdlib>

# define MAX_CONTACTS 8

class Phonebook
{
    private:
    
        Contacts	_contacts[MAX_CONTACTS];
        int			_nb;
        int         _position;
        
        std::string truncInfo(std::string str); 
        void		displayInfo(void);
		
    public:

        Phonebook( void );
        ~Phonebook( void );
        void    addContact(Contacts c);
        void    displayContacts( void );
};

std::string getInput(std::string type);


#endif