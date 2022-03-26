/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/25 00:39:38 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	invArg(void) {
	std::cout << "Please, use the following syntax: \"./convert <argument>\"" << std::endl;
}

int		main(int ac, char **av) {
	Convert		convert;
	
	if (ac != 2) {
		std::cout << "Error - Wrong number of arguments." << std::endl;
		invArg();
		return (1);
	} else {
		convert.conversor(av[1]);
	}
	return (0);
}

