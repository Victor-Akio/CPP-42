/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/11 22:16:08 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	*chapOne(ClapTrap *ClapTrap) {
	std::cout << "[ Chapter one... ]\n" << std::endl;
	std::cout << "In the Borderlands universe, there is this robot  - Claptrap or CL4P-TP" << std::endl;
	std::cout << "Even Being a Amazing Robot, he is a little bit dumb..." << std::endl;
	std::cout << "Some evil being, just hacked his systems and tried to launch an attack to our heroes!" << std::endl;
	std::cout << "Sneaking behind Lilith hitting her with it's forehead..." << std::endl;
	ClapTrap->attack("Lilith");
	std::cout << std::endl;
	std::cout << "Dealing not much damage, but enfuriating her..." << std::endl;
	std::cout << "She kicked him away, shouting..." << std::endl;
	std::cout << "- WTF, Stupid robot!" << std::endl;
	ClapTrap->takeDamage(5);
	std::cout << std::endl;
	std::cout << "rapidly, CL4P-TP retreated to it's room and started to repair itself..." << std::endl;
	ClapTrap->beRepaired(3);
	std::cout << std::endl;
	std::cout << "Not that effective, but good enough...\n" << std::endl;
	std::cout << std::endl;

	std::cout << "[ Chapter two... and the last one ]\n" << std::endl;
	std::cout << "The evil man, intended to create more chaos, making CL4P-TP rush towards" << std::endl;
	std::cout << "Modecai, Brick and Roland.... Wich were just chilling arround..." << std::endl;
	std::cout << "Jumping in the air, and slaming its body into them..." << std::endl;
	std::cout << "Definetly, not that effective, but enfuriating tham too..." << std::endl;
	ClapTrap->attack("Mordecai");
	ClapTrap->attack("Brick");
	ClapTrap->attack("Roland");
	std::cout << std::endl;
	std::cout << "Even not saying a word... the three of them look at each other..." << std::endl;
	std::cout << "and they start to kick the fricking Robot to its core.." << std::endl;
	ClapTrap->takeDamage(1);
	ClapTrap->takeDamage(3);
	ClapTrap->takeDamage(2);
	ClapTrap->takeDamage(2);
	ClapTrap->takeDamage(2);
	ClapTrap->takeDamage(3);
	std::cout << std::endl;
	std::cout << "Yep... that's that... After some time, they rebuild CL4P-TP again.." << std::endl;
	std::cout << "aaaand, that is it.. end of the story.. for now.\n" << std::endl;
	return (ClapTrap);
}

void	*chapTwo(ClapTrap *ClapTrap) {
	std::cout << "[ Bonus Chapter... ]" << std::endl;
	std::cout << "The new ClapTrap was still under influence of the evil being.." << std::endl;
	std::cout << "and was nuts about the last attempt... starting to kick the computer screen with" << std::endl;
	std::cout << "his Digital Ocean slippers, again and again and again...." << std::endl;
	for (int i = 11; i != 0; i--) {ClapTrap->attack("Computer Screen");}
	std::cout << "Exausted... it just fell on it's wheels.. and shut down..." << std::endl;
	return (ClapTrap);
}

void	*chapThree(ClapTrap *ClapTrap) {
	std::cout << "[ Another Day, Another crap... ]" << std::endl;
	std::cout << "Here CL4P-TP was running arroung when suddenly...\n...\n..." << std::endl;
	std::cout << "Fell from the 10th floor of some random building..." << std::endl;
	ClapTrap->takeDamage(9);
	std::cout << "Even spilling oil from his googles.. it tries to repair itself" << std::endl;
	for (int i = 0; i < 11; i++) {ClapTrap->beRepaired(1);}
	std::cout << "It used all it's energy to be repaired... shutting down instantly..." << std::endl;
	return (ClapTrap);
}

void	invArg(void) {
	std::cout << "Error - Invalid arguments." << std::endl;
	std::cout << "Please, use the following syntax: \"./claptrap <chapter_number>\"" << std::endl;
	std::cout << "Even though, there is ony 3 chapters... 1, 2 or 3 ;)" << std::endl;
}

//	AAAAAnd Open....
int		main(int ac, char **av) {
	ClapTrap	ClapTrap;
	std::string	list[3] = {"1", "2", "3"};
	int			i = 0;

	if (ac != 2) {
		std::cout << "Error - Wrong number of arguments." << std::endl;
		std::cout << "Please, use the following syntax: \"./claptrap <chapter_number>\"" << std::endl;
		std::cout << "Even though, there is ony 3 chapters... 1, 2 or 3 ;)" << std::endl;
		return (1);
	}
	while (i < 3 && list[i] != av[1]) i++;
	if (i > 3) {
		invArg();
		return (1);
	}
	switch (i) {
		case 0:
			chapOne(&ClapTrap);
			return (0);
		case 1:
			chapTwo(&ClapTrap);
			return (0);
		case 2:
			chapThree(&ClapTrap);
			return (0);
		default:
			invArg();
			return (1);
	}
	return (0);
}
