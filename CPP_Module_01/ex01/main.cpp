/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:40:54 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/03 19:07:27 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

bool is_number(const std::string &s)
{
    int	i = 0;
    while (s[i]) {
		if (!std::isdigit(s[i])) {
			return false;
		}
		i++;
	}	
    return true;
}

int		main(int ac, char **av) {
	Zombie	zombie;
	std::string	name = "Zombie";
	Zombie	*horde;	

	if ((ac == 2) && (is_number(av[1]) == 1)) {
		int	nZombie = atoi(av[1]);
		int	i = 0;
		horde = zombie.zombieHorde(nZombie, name);
		while (nZombie > i) {
			std::cout << (i + 1) << "º ";
			horde[i].announce();
			i++;
		}
		delete[] horde;
		std::cout << nZombie << " Zombies died today!" << std::endl;
		return (0);
	} else {
		std::cout << "Invalid input!" << std::endl << 
		"Please, use the following syntax to run the Horde maker:\n\"./horde <number>\"" << std::endl;
	}
	return (1);
}
