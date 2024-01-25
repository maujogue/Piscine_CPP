/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:00:48 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/19 13:09:00 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal {
	
	protected:
		std::string type;
	
	public:
		AAnimal();
		AAnimal( const AAnimal & src );

		AAnimal & operator=( const AAnimal & src);

		virtual			~AAnimal();

		virtual void	makeSound() const = 0;
		std::string 	getType() const;
};

#endif