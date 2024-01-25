/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:37:45 by maujogue          #+#    #+#             */
/*   Updated: 2023/12/05 15:37:45 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(const Serializer &src){
	*this = src;
}

Serializer &Serializer::operator=(const Serializer &src){
	if (this != &src)
		*this = src;
	return (*this);
}

Serializer::~Serializer(){}

uintptr_t 	Serializer::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* 		Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}
