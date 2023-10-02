#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie = zombieHorde(2, "Zombie");
	for (int i = 0; i < 1; i++)
		zombie[i].announce();
	delete[] zombie; 
	return (0);
}
