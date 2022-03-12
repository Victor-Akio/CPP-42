/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/12 01:15:22 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	invArg(void) {
	std::cout << "Error - Invalid arguments." << std::endl;
	std::cout << "Please, use the following syntax: \"./claptrap <chapter_number>\"" << std::endl;
	std::cout << "Even though, there is ony 3 chapters... 1, 2 or 3 ;)" << std::endl;
}

//	AAAAAnd Open....
int		main(int ac, char **av) {
	// ClapTrap	ClapTrap;
	int			x = 1;
	std::string	list[x] = {"1"};
	int			i = 0;

	if (ac != 2) {
		std::cout << "Error - Wrong number of arguments." << std::endl;
		std::cout << "Please, use the following syntax: \"./claptrap <chapter_number>\"" << std::endl;
		std::cout << "Even though, there is ony 3 chapters... 1, 2 or 3 ;)" << std::endl;
		return (1);
	}
	while (i < x && list[i] != av[1]) i++;
	if (i > x) {
		invArg();
		return (1);
	}
	switch (i) {
		case 0:
			{
				ScavTrap	ScavTrap;

				ScavTrap.guardGate();
				return (0);
			}
		default:
			invArg();
			return (1);
	}
	return (0);
}
