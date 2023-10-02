/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 08:49:06 by spirnaz           #+#    #+#             */
/*   Updated: 2023/09/18 08:49:07 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string	name;
		std::string	type;
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
