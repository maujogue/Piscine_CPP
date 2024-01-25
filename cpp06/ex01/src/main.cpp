/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:15:40 by maujogue          #+#    #+#             */
/*   Updated: 2023/12/05 15:15:40 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
	Data *data = new Data;
	data->s = "I'm good!";
	data->n = 69;

	std::cout << "Before serialization :" << std::endl;
	std::cout << data->s << std::endl;
	std::cout << data->n << std::endl;

	uintptr_t raw = Serializer::serialize(data);

	std::cout << std::endl << "Raw type adress: " << raw << std::endl ;

	Data *data2 = Serializer::deserialize(raw);

	std::cout << std::endl << "After deserialization :" << std::endl;
	std::cout << data2->s << std::endl;
	std::cout << data2->n << std::endl;

	delete data;
	return (0);
}