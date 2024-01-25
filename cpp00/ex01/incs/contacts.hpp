/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:21:19 by mathisaujog       #+#    #+#             */
/*   Updated: 2023/10/04 11:27:04 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>
# include <cstdlib>
    
class Contacts
{       
    private:

        std::string _phoneNumber;
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _darkestSecret;

    public:

        Contacts();
        ~Contacts( void );
    
        std::string getNumber( void ) const;
        std::string getFirstName( void ) const;
        std::string getLastName( void ) const;
        std::string getNickName( void ) const;
        std::string getSecret( void ) const;
        void setNumber(std::string nb);
        void setFirstName(std::string nb);
        void setLastName(std::string nb);
        void setNickName(std::string nb);
        void setSecret(std::string nb);
};



#endif