/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:55:14 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 16:16:10 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AMateria.hpp"
#include "../incs/Cure.hpp"
#include "../incs/Ice.hpp"
#include "../incs/Character.hpp"
#include "../incs/ICharacter.hpp"
#include "../incs/MateriaSource.hpp"
#include "../incs/IMateriaSource.hpp"

int main()
{
	// Character bob("bob");
	// Character me("me");
	
	// bob = me;
	// std::cout << bob.getName() << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;
	
	ICharacter* me = new Character("me");
	std::cout << std::endl;
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);
	std::cout << std::endl;
	
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(3, *bob);
	me->unequip(1);
	me->unequip(1);
	std::cout << std::endl;
	
	delete bob;
	delete me;
	delete src;
	return 0;
}
