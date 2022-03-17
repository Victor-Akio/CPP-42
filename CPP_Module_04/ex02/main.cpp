/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 20:42:27 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

void	invArg(void) {
	std::cout << "Error - Invalid argument." << std::endl;
	std::cout << "Please, use the following syntax: \"./aanimals <model_number>\"" << std::endl;
	std::cout << "ex00 is 0, ex01 is 1 and ex02 is 2." << std::endl;
}

/*	ABSTRACT CLASS
**	https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm
*/
int main(int ac, char **av) {
	int			x = 3;
	std::string	list[x] = {"0", "1", "2"};
	int			i = 0;

	if (ac != 2) {
		std::cout << "Error - Wrong number of arguments." << std::endl;
		std::cout << "Please, use the following syntax: \"./aanimals <model_number>\"" << std::endl;
		std::cout << "ex00 is 0, ex01 is 1 and ex02 is 2." << std::endl;
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
			std::cout << "[Zero Hour - First exercise]" << std::endl;
			ex00();
			return (0);
		}
		case 1:
		{
			std::cout << "[Let's set the world on fire?]" << std::endl;
			ex01();
			return (0);
		}
		case 2:
		{
			std::cout << "[Abstract Class and other things]" << std::endl;
			ex02();
			return (0);
		}
		default:
			invArg();
			return (1);
	}
	return 0;
}
