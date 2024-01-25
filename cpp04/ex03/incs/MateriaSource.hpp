/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:57:10 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 14:22:21 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class IMateriaSource;

class MateriaSource : public IMateriaSource{
	private:
		AMateria* _brain[4];
		int	_oldestMateriaIndex;
		
	public:
		MateriaSource ( void );
		MateriaSource ( MateriaSource const & src);
		MateriaSource &operator=( MateriaSource const & src);
		~MateriaSource ( void );
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif