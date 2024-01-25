/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathisaujogue <mathisaujogue@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:54:57 by mathisaujog       #+#    #+#             */
/*   Updated: 2023/10/03 15:58:42 by mathisaujog      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/contacts.hpp"
#include "../incs/phonebook.hpp"

Contacts::Contacts(void)
{
    return ;
}

Contacts::~Contacts (void)
{
    return ;
}

std::string Contacts::getNumber(void) const {
    return this->_phoneNumber;
}

std::string Contacts::getFirstName(void) const {
    return this->_firstName;
}

std::string Contacts::getLastName(void) const {
    return this->_lastName;
}

std::string Contacts::getNickName(void) const {
    return this->_nickName;
}

std::string Contacts::getSecret(void) const {
    return this->_darkestSecret;
}

void Contacts::setNumber(std::string nb)
{
    this->_phoneNumber = nb;
    return ;
}

void Contacts::setFirstName(std::string nb)
{    
    this->_firstName = nb;
    return ;
}

void Contacts::setLastName(std::string nb)
{    
    this->_lastName = nb;
    return ;
}

void Contacts::setNickName(std::string nb)
{    
    this->_nickName = nb;
    return ;
}

void Contacts::setSecret(std::string nb)
{    
    this->_darkestSecret = nb;
    return ;
}
