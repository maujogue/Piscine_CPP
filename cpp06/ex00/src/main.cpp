/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:31:26 by maujogue          #+#    #+#             */
/*   Updated: 2023/11/27 14:31:26 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char **argv){
	if (argc != 2)
		std::cout << "Error: needs 1 argument." << std::endl;
	else
		ScalarConverter::convert(argv[1]);
	return (0);
}