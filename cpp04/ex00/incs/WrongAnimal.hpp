/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:00:48 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/18 14:38:40 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	
	protected:
		std::string type;
	
	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal & src );

		WrongAnimal & operator=( const WrongAnimal & src);

		~WrongAnimal();

		void	makeSound() const;
		std::string 	getType() const;
};

#endif