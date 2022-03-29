/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 06:37:57 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/29 07:36:02 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void) {
	{
		std::cout << "[The Address...]" << std::endl;
		int			*a = new int();
		std::cout << "PDF said to display *a: " << a << std::endl;
		delete a;
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[The Array...]" << std::endl;
		Array<int>	arr(5);

		try {
			for (unsigned int i = 0; i < arr.size(); i++) {
				arr[i] = i + 1;
				std::cout << arr[i] << std::endl;
			}
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "------------------------------------------------------" << std::endl;
	{
		std::cout << "[The Random Main we receive...]" << std::endl;
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));

		std::cout << "[Generating arrays...]" << std::endl;
		for (int i = 0; i < MAX_VAL; i++) {
			const int value = std::rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		std::cout << "[Verifying if mirror gets the same numbers ...]" << std::endl;
		for (int i = 0; i < MAX_VAL; i++) {
			if (mirror[i] != numbers[i]) {
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		std::cout << "[Try to atribute 0 to negative position]" << std::endl;
		try {
			numbers[-2] = 0;
		} catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		std::cout << "[Try to atribute 0 after the last position]" << std::endl;
		try {
			numbers[MAX_VAL] = 0;
		} catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		std::cout << "[Randomize again the array...]" << std::endl;
		for (int i = 0; i < MAX_VAL; i++) {
			numbers[i] = rand();
			std::cout << "| " << numbers[i];
		}
		std::cout << std::endl;
		delete[] mirror;
	}
	return (0);
}
