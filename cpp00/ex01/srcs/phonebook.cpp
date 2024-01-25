/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:21:22 by mathisaujog       #+#    #+#             */
/*   Updated: 2023/10/04 11:24:50 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/contacts.hpp"
#include "../incs/phonebook.hpp"

Phonebook::Phonebook (void)
{
    _nb = 0;
    _position = 0;
    return ;
}

Phonebook::~Phonebook (void)
{
    return ;
}

void    Phonebook::addContact(Contacts c)
{
    this->_contacts[this->_position] = c;
    if (this->_nb < MAX_CONTACTS)
	    this->_nb++;
    if (this->_position < MAX_CONTACTS - 1)
        this->_position++;
    else
        this->_position = 0;
}

std::string Phonebook::truncInfo(std::string str)
{
    if (str.length() > 9)
    {
        str.resize(9);
        str += ".";
    }
    else
    {
        while (str.length() < 10)
            str.insert(0, " ");
    }
    return (str);
}

void	Phonebook::displayInfo(void)
{
	int	index = -1;
	
	std::cout << "Enter the index of the contact to be displayed: " << std::endl;
	while (1)
	{
		index = std::atoi(getInput("number").c_str());
		if (index < 0 || index > this->_nb - 1)
			std::cout << "Error: index is invalid" << std::endl;
		else
			break;
	}
	std::cout << "Number: " << this->_contacts[index].getNumber() << std::endl;
	std::cout << "First Name: " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].getNickName() << std::endl;
	std::cout << "Darkest secret: " << this->_contacts[index].getSecret() << std::endl;
}

void    Phonebook::displayContacts(void)
{
    int			i = 0;
    std::string	str;
    
    if (this->_nb == 0)
    {
        std::cout << "No contacts to display!" << std::endl;
        return ;
    }
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    while (i < this->_nb)
    {
    	std::cout << "---------------------------------------------" << std::endl;
        std::cout <<  "|         " << i <<  + "|";
        str += this->truncInfo(this->_contacts[i].getFirstName());
		str += "|";
        str += this->truncInfo(this->_contacts[i].getLastName());
		str += "|";
        str += this->truncInfo(this->_contacts[i].getNickName());
		str += "|";
		std::cout << str << std::endl;
        str.clear();
		i++;
    }
    std::cout << "---------------------------------------------" << std::endl;
	this->displayInfo();
}