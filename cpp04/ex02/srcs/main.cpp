/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:21:27 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/23 16:36:59 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AAnimal.hpp"
#include "../incs/WrongAnimal.hpp"
#include "../incs/Dog.hpp"
#include "../incs/Cat.hpp"
#include "../incs/WrongCat.hpp"
#include "../incs/Brain.hpp"

int main()
{
	AAnimal* animalArray[4];
	// AAnimal shouldNotWork;
	std::cout << std::endl;
	
	for (int i = 0; i < 2; i++)
		animalArray[i] = new Dog;
	
	for (int i = 2; i < 4; i++)
		animalArray[i] = new Cat;
	std::cout << std::endl;

	Cat cat;
	// Cat cat2;
	Dog dog;
	std::cout << std::endl;
	
	cat.setIdea(0, "I'd love to be a Dog");
	// cat2 = cat;
	Cat cat2(cat);
	cat2.setIdea(0, "Bang!");
	dog.setIdea(0, "I'd love to be a Cat");
	std::cout << cat.getIdea(0) << std::endl;
	std::cout << cat2.getIdea(0) << std::endl;
	std::cout << dog.getIdea(1) << std::endl;
	std::cout << dog.getIdea(0) << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		animalArray[i]->makeSound();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)	
		delete animalArray[i];
	std::cout << std::endl;
	return 0;
}