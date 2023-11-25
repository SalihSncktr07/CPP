/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:19:16 by spirnaz           #+#    #+#             */
/*   Updated: 2023/11/19 13:19:17 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog - Default constructor called" << std::endl;

	type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog - Destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog - Copy constructor called" << std::endl;

	type = other.type;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog - Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		type = other.type;
	}

	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog - Woof Woof" << std::endl;
}
