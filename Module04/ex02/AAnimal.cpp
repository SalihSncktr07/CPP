/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:21:55 by spirnaz           #+#    #+#             */
/*   Updated: 2023/11/19 13:21:56 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal - Default constructor called" << std::endl;

	type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "AAnimal - Copy constructor called" << std::endl;

	type = other.type;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal - Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		type = other.type;
	}

	return *this;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal - Destructor called" << std::endl;
}

const std::string AAnimal::getType(void) const
{
	return type;
}
