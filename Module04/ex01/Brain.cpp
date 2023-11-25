/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:20:33 by spirnaz           #+#    #+#             */
/*   Updated: 2023/11/19 13:20:33 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain - Default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain - Copy constructor called" << std::endl;

	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain - Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}

	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain - Destructor called" << std::endl;
}
