/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:23:57 by spirnaz           #+#    #+#             */
/*   Updated: 2023/11/19 13:23:58 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	// Orthodox Canonical Class Form
	Ice(void);
	virtual ~Ice(void);
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);

	// Subject
	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif
