/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:19:04 by spirnaz           #+#    #+#             */
/*   Updated: 2023/11/19 13:19:05 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat - Default constructor called" << std::endl;

	type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat - Destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat - Copy constructor called" << std::endl;

	type = other.type;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat - Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		type = other.type;
	}

	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat - Meow" << std::endl;
}
