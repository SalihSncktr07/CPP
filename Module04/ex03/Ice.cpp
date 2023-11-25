/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:23:53 by spirnaz           #+#    #+#             */
/*   Updated: 2023/11/19 13:23:54 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void)
{
	type = "ice";
}

Ice::~Ice(void)
{
}

Ice::Ice(const Ice &other) : AMateria(other)
{
	this->type = other.type;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}

	return *this;
}

AMateria *Ice::clone(void) const
{
	return new Ice();
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
