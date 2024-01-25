/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:17:28 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/05 16:52:05 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replace(std::string content, std::string s1, std::string s2)
{
	int index = 0;

	while (!s1.empty() && content.find(s1, index) != std::string::npos)
	{
		index = content.find(s1, index);
		content.erase(index, s1.length());
		content.insert(index, s2);
	}
	return (content);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	else
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string content;
		std::string temp;
		
		std::ifstream infile(filename.c_str());
		if (infile.is_open())
		{
			std::ofstream outfile((filename + ".replace").c_str(), std::ios_base::out | std::ios_base::trunc);
			if (!outfile.is_open())
			{
				std::cout << "Error: can't create outfile" << std::endl;
				return (1);
			}
			while (std::getline(infile, temp))
			{
				content += temp;
				if (infile.good())
					content += "\n";
			}
			outfile << replace(content, s1, s2);
			infile.close();
			outfile.close();
		}
		else
		{
			std::cout << "Error: Can't open [" << filename << "]" << std::endl;
			return (1);
		}
	}
	return (0);
}
