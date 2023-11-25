/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <spirnaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:22:32 by spirnaz           #+#    #+#             */
/*   Updated: 2023/11/19 13:22:33 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	// compile error because AAnimal is abstract class
	// AAnimal test1;
	// AAnimal *test2 = new AAnimal();

	const AAnimal *dog = new Dog();
	const AAnimal *cat = new Cat();

	std::cout << "\n*** Get Type ***" << std::endl;

	std::cout << "Dog Type : " << dog->getType() << std::endl;
	std::cout << "Cat Type : " << cat->getType() << std::endl;

	std::cout << "\n*** Make Sound ***" << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl;

	delete dog;
	delete cat;

	return 0;
}
