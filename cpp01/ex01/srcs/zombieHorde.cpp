/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:39:13 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/04 15:38:32 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = -1;
    Zombie* zGang = new Zombie[N];

    while (++i < N)
    {
        zGang[i].setName(name);
        zGang[i].announce();
    }
    return (zGang);
}