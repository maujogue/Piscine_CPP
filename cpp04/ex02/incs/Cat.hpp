/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:00:48 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 16:26:23 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
	
	private:
		Brain *_brain;
		
	public:
		Cat();
		Cat( const Cat & src );

		Cat & operator=( const Cat & src);

		~Cat();
		
		void	makeSound() const;
		std::string getIdea( int index);
		void		setIdea(int index, std::string idea);
};

#endif