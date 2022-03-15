/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/15 21:38:27 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	claptrap(void) {
	{
		ClapTrap	ClapTrap;

		std::cout << "[Attack until gets exhausted]" << std::endl;
		for (int i = 0; i < 11; i++) {
			ClapTrap.attack("the Air");
		}
	}
	{
		ClapTrap	ClapTrap;

		std::cout << "[repair until gets exuasted]" << std::endl;
		ClapTrap.takeDamage(9);
		for (int i = 0; i < 11; i++) {
			ClapTrap.beRepaired(1);
		}
	}
	{
		ClapTrap	ClapTrap;

		std::cout << "[Dies...]" << std::endl;
		ClapTrap.takeDamage(11);
		ClapTrap.takeDamage(1);
	}
}

void	scavtrap(void) {
	{
		ScavTrap	ScavTrap;

		std::cout << "[Attack until gets exhausted]" << std::endl;
		for (int i = 0; i < 51; i++) {
			ScavTrap.attack("anything coming");
		}
	}
	{
		ScavTrap	ScavTrap;

		std::cout << "[repair until gets exuasted]" << std::endl;
		ScavTrap.takeDamage(99);
		for (int i = 0; i < 51; i++) {
			ScavTrap.beRepaired(1);
		}
	}
	{
		ScavTrap	ScavTrap;

		std::cout << "[Dies...]" << std::endl;
		ScavTrap.takeDamage(101);
		ScavTrap.takeDamage(1);
	}
	{
		ScavTrap	ScavTrap;

		std::cout << "[Guard the gate]" << std::endl;
		ScavTrap.guardGate();
	}
}

void	fragtrap(void) {
	{
		FragTrap	FragTrap;

		std::cout << "[Attack until gets exhausted]" << std::endl;
		for (int i = 0; i < 101; i++) {
			FragTrap.attack("Barrels");
		}
	}
	{
		FragTrap	FragTrap;

		std::cout << "[repair until gets exuasted]" << std::endl;
		FragTrap.takeDamage(99);
		for (int i = 0; i < 101; i++) {
			FragTrap.beRepaired(1);
		}
	}
	{
		FragTrap	FragTrap;

		std::cout << "[Dies...]" << std::endl;
		FragTrap.takeDamage(100);
		FragTrap.takeDamage(10);
	}
	{
		FragTrap	FragTrap;

		std::cout << "[Ask for High Fives.]" << std::endl;
		FragTrap.highFivesGuys();
	}
}

void	invArg(void) {
	std::cout << "Error - Invalid argument." << std::endl;
	std::cout << "Please, use the following syntax: \"./fragtrap <model_number>\"" << std::endl;
	std::cout << "ClapTrap is 0, ScavTrap is 1 and FragTrap is 2." << std::endl;
}

//	Repetitive work
int		main(int ac, char **av) {
	int			x = 3;
	std::string	list[x] = {"0", "1", "2"};
	int			i = 0;

	if (ac != 2) {
		std::cout << "Error - Wrong number of arguments." << std::endl;
		std::cout << "Please, use the following syntax: \"./fragtrap <model_number>\"" << std::endl;
		std::cout << "ClapTrap is 0, ScavTrap is 1 and FragTrap is 2." << std::endl;
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
				std::cout << "Same thing as prevously..." << std::endl;
				claptrap();
				return (0);
			}
		case 1:
			{
				std::cout << "Using some random ScavTraps, instead ..." << std::endl;
				scavtrap();
				return (0);
			}
		case 2:
			{
				std::cout << "For some Frag NADES Traps..." << std::endl;
				fragtrap();
				return (0);
			}
		default:
			invArg();
			return (1);
	}
	return (0);
}
