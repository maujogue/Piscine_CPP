/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:54:30 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/05 14:00:11 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
    
    private:
        std::string _type;
        
    public:
		Weapon(std::string type);
		~Weapon();
        const std::string&	getType( void ) const;
        void		setType(std::string type);
        
};

#endif