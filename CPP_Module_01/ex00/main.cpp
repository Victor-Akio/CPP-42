/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:40:54 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/03 00:30:25 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void) {
	/*Um zumbi alocado e inicializado*/
	Zombie	*zombie = new Zombie("Z1");
	zombie->announce();
	/*Quando criar um novo zumbi, faz-se alocar e inicializar o zumbi*/
	Zombie	*anotherZombie = zombie->newZombie("Z2");
	anotherZombie->announce();
	/*Neste momento, ao utilizar esta função, o zumbi é processado dentro desta função
	**Z3 irá morrer instantaneamente após terminar a função;	
	*/
	anotherZombie->randomChump("Z3");
	/*delete - liberar memória alocada*/
	delete zombie;
	delete anotherZombie;
	return (0);
}
