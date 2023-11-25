/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:23:49 by spirnaz           #+#    #+#             */
/*   Updated: 2023/11/19 13:23:50 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	// Orthodox Canonical Class Form
	Cure(void);
	virtual ~Cure(void);
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);

	// Subject
	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif
