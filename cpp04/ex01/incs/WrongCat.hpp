/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:00:48 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/18 14:38:42 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	
	public:
		WrongCat();
		WrongCat( const WrongCat & src );

		WrongCat & operator=( const WrongCat & src);

		~WrongCat();
		
		void	makeSound() const;
};

#endif