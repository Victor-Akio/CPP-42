/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 03:21:05 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/05 01:11:02 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int ac, char **av) {
	Karen		Karen;
	int			i = 0;
	std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	if (ac != 2) {
		std::cout << "Error - Wrong number of arguments. \n" \
		<< "Please, use the following syntax: \"./Karen <complain>\" \n" \
		<< "List of complains: DEBUG, INFO, WARNING and ERROR." << std::endl;
		return (1);
	} else if (ac == 2) {
		while (i < 4 && list[i].c_str() != av[1]) {
			if (list[i] == av[1]) {
				Karen.complain(av[1]);
				return (0);
			}
			i++;
		}
	}
	std::cout << "ERROR - Following Complain was not found. \n" \
	<< "Please, use: DEBUG, INFO, WARNING or ERROR." << std::endl;
	return (1);
}