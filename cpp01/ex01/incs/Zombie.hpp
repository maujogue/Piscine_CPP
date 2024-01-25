/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:48:19 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/04 14:48:54 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    
    private:
        std::string	name;

    public:
		Zombie();
		~Zombie();
		void announce(void);
		std::string getName( void ) const;
		void	setName(std::string name);
};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif