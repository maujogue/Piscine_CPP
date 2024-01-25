/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:48:16 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/04 14:34:34 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

Zombie::Zombie()
{
    return ;
}

Zombie::~Zombie()
{
    std::cout << this->name << " died" << std::endl;
}

std::string Zombie::getName( void ) const{
    return (this->name);
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

void    Zombie::announce( void ){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name )
{
    Zombie *z = new Zombie;
    z->setName(name);
    return (z);
}

void randomChump( std::string name )
{
    Zombie z;
    z.setName(name);
    z.announce();
}