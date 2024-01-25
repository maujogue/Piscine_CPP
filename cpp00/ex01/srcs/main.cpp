/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:04:32 by mathisaujog       #+#    #+#             */
/*   Updated: 2023/10/04 11:24:08 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/contacts.hpp"
#include "../incs/phonebook.hpp"

int checkString(std::string str)
{
    int i = 0;
    
    while (str[i])
    {
        if (std::isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

int checkNumber(std::string str)
{
    int i = 0;
    
    while (str[i])
    {
        if (std::isdigit(str[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}

std::string getInput(std::string type)
{
    std::string str;
    
    while (1)
    {
        if (!(std::getline(std::cin,str)))
            exit(0);
        if (str.empty())
            std::cout << "Error: input is empty" << std::endl;
        else if (std::isspace(str[0]))
            std::cout << "Error: input starts with an empty character" << std::endl;
        else if (type == "string" && checkString(str) == 0)
            std::cout << "Error: input contains a number" << std::endl;
        else if (type == "number" && checkNumber(str) == 0)
            std::cout << "Error: input must be digit-only" << std::endl;
        else
            return (str);
    }
    return (NULL);
}

Contacts createContact(void)
{
    Contacts c;

    std::cout << "Number: ";
    c.setNumber(getInput("number"));
    std::cout << "First Name: ";
    c.setFirstName(getInput("string"));
    std::cout << "Last Name: ";
    c.setLastName(getInput("string"));
    std::cout << "Nickname: ";
    c.setNickName(getInput("string"));
    std::cout << "Secret: ";
    c.setSecret(getInput("string"));
    std::cout << "Added " << c.getFirstName() <<" "<< c.getLastName()<< " to your contacts!" << std::endl;
    return (c);
}

int main (void)
{
    Phonebook       Phonebook;
    std::string     cmd;

    std::cout << "Please enter of the following commands:" << std::endl;
    std::cout << "ADD: save a new contact"<< std::endl;
    std::cout << "SEARCH: display a specific contact" << std::endl;
    std::cout << "EXIT" << std::endl;
    while (1)
    {
        std::cout << "->";
        if (!(std::getline(std::cin, cmd)))
            exit(0);
        if (cmd == "ADD")
            Phonebook.addContact(createContact());
        else if (cmd == "SEARCH")
            Phonebook.displayContacts();
        else if (cmd == "EXIT")
            return (0);
        else
            std::cout << "Please input a valid command" << std::endl;
    }
    return (0);
}
