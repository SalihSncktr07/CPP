/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:23:45 by spirnaz           #+#    #+#             */
/*   Updated: 2023/11/19 13:23:46 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void)
{
	type = "cure";
}

Cure::~Cure(void)
{
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	this->type = other.type;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}

	return *this;
}

AMateria *Cure::clone(void) const
{
	return new Cure();
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
