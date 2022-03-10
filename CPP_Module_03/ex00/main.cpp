/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/10 03:19:57 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//	AAAAAnd Open....
int		main(void) {
	{
		ClapTrap	ClapTrap;
		
		ClapTrap.attack("Lilith");
		ClapTrap.takeDamage(5);
		ClapTrap.beRepaired(3);
	}
	return (0);
}

//Lilith the Siren, Mordecai the Hunter, Brick the Berserker, and Roland the Soldier