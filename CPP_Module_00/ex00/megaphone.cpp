/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:11:24 by vminomiy          #+#    #+#             */
/*   Updated: 2022/02/11 01:21:03 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (--argc) {
		argv++;
		for (size_t i = 0; i < strlen(*argv); i++)
			(*argv)[i] = std::toupper((*argv)[i]);
		std::cout << *argv << " ";
	}
	std::cout << std::endl;
	return (0);
}