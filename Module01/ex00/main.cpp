/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 08:48:23 by spirnaz           #+#    #+#             */
/*   Updated: 2023/09/18 08:48:24 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	// Create a new Zombie on the heap
	Zombie* nZombie = newZombie("Zombie_1");
	nZombie->announce();
	delete nZombie;

	// Create a new Zombie on the stack
	randomChump("Zombie_2");
	return (0);
}
