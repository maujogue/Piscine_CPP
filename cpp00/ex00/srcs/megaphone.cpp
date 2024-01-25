/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathisaujogue <mathisaujogue@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:57:31 by mathisaujog       #+#    #+#             */
/*   Updated: 2023/10/02 10:16:27 by mathisaujog      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    int i = 0;
    
    if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
    while (--argc)
    {
        argv++;
        i = 0;
        while ((*argv)[i])
        {
            (*argv)[i] = std::toupper((*argv)[i]);
            i++;
        }
        std::cout << (*argv);
    }
    std::cout << std::endl;
    return (0);
}