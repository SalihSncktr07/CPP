/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:23:24 by spirnaz           #+#    #+#             */
/*   Updated: 2023/11/19 13:23:26 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

// Forward Declaration (İleri bildirim) yöntemi
// ICharacter sınıfının var olduğunu bildiriyoruz.
class ICharacter;

class AMateria
{
protected:
	std::string type;

public:
	// Orthodox Canonical Class Form
	AMateria(void);
	virtual ~AMateria(void);
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &other);

	// Subject
	AMateria(std::string const &type);
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
