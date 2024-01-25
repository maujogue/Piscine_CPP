/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:21:27 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 16:30:44 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"
#include "../incs/WrongAnimal.hpp"
#include "../incs/Dog.hpp"
#include "../incs/Cat.hpp"
#include "../incs/WrongCat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	// const Animal* i = new Cat();
	const WrongAnimal* i = new WrongCat();
	std::cout << std::endl;
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	std::cout << std::endl;
	delete j;
	delete i;
	delete meta;
	
	return 0;
}