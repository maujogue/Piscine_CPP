/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:52:11 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/19 11:19:42 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	private:
		std::string _ideas[100];	
	
	public:
		Brain();
		Brain(const Brain & src);

		Brain & operator=(const Brain & src);

		~Brain();
		std::string getIdea( int index);
		void		setIdea(int index, std::string idea);
};

#endif