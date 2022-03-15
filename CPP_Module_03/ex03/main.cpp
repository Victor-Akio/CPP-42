/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 00:00:12 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

void	diamondtrap(void) {
	{
		DiamondTrap	DiamondTrap("DI4M0ND-TP");

		std::cout << "[Attack until gets exhausted]" << std::endl;
		for (int i = 0; i < 101; i++) {
			DiamondTrap.attack("The Glass");
		}
	}
	{
		DiamondTrap	DiamondTrap("DI4M0ND-TP");

		std::cout << "[Polishes until gets exuasted]" << std::endl;
		DiamondTrap.takeDamage(99);
		for (int i = 0; i < 101; i++) {
			DiamondTrap.beRepaired(1);
		}
	}
	{
		DiamondTrap	DiamondTrap("DI4M0ND-TP");

		std::cout << "[To dust...]" << std::endl;
		DiamondTrap.takeDamage(100);
		DiamondTrap.takeDamage(10);
	}
	{
		DiamondTrap	DiamondTrap("DI4M0ND-TP");

		std::cout << "[Have a little chat with Claptrap]" << std::endl;
		DiamondTrap.whoAmI();
	}
}

void	invArg(void) {
	std::cout << "Error - Invalid argument." << std::endl;
	std::cout << "Please, use the following syntax: \"./diamondtrap <model_number>\"" << std::endl;
	std::cout << "ClapTrap is 0, ScavTrap is 1, FragTrap is 2 and DiamondTrap is 3." << std::endl;
}

//	Now it’s weird!
int		main(int ac, char **av) {
	int			x = 4;
	std::string	list[x] = {"0", "1", "2", "3"};
	int			i = 0;

	if (ac != 2) {
		std::cout << "Error - Wrong number of arguments." << std::endl;
		std::cout << "Please, use the following syntax: \"./diamondtrap <model_number>\"" << std::endl;
		std::cout << "ClapTrap is 0, ScavTrap is 1, FragTrap is 2 and DiamondTrap is 3." << std::endl;
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
		case 3:
			{
				std::cout << "Lika a Diamond in the skies..." << std::endl;
				diamondtrap();
				return (0);
			}
		default:
			invArg();
			return (1);
	}
	return (0);
}
