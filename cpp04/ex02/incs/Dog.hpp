/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:00:48 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/19 13:09:27 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
	
	private:
		Brain *_brain;
		
	public:
		Dog();
		Dog( const Dog & src );

		Dog & operator=( const Dog & src);

		virtual ~Dog();

		virtual void	makeSound() const;
		std::string getIdea( int index);
		void		setIdea(int index, std::string idea);
};

#endif