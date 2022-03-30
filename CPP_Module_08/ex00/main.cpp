/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/30 02:50:08 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void) {
	{
		std::cout << "[Everything is fine...]" << std::endl;
		try {
			std::list<int>	list;

			for (int i = 0; i < 20; i++)
				list.push_back(i + 1);
			easyfind(list, 10);
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "------------------------------------------------------" << std::endl;
	{
		std::cout << "[If no number was found in the array...]" << std::endl;
		try {
			std::list<int>	list;

			for (int i = 0; i < 10; i++)
				list.push_back(i + 1);
			easyfind(list, 42);
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "------------------------------------------------------" << std::endl;
	{
		std::cout << "[Randomize and find...]" << std::endl;
		srand(time(NULL));
		try {
			std::list<int>	list;

			for (int i = 1; i < 10; i++) 
				list.push_back(std::rand() % 3);
			easyfind(list, 2);
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
