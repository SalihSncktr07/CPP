/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:39:44 by spirnaz           #+#    #+#             */
/*   Updated: 2023/09/14 15:39:47 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str(argv[i]);

			for (size_t j = 0; j < str.length(); j++)
				std::cout << (char)toupper(str[j]);

			if (i < argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
