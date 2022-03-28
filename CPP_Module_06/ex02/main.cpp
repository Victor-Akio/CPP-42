/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/28 07:14:41 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int		main(void) {
	{
		srand(time(NULL));
		Base	*base = generate();

		std::cout << "[Simple testing for Dynamic Casting]" << std::endl;
		std::cout << "The base *p is ";
		identify(base);
		std::cout << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "The base &p is ";
		identify(*base);
		std::cout << std::endl;
		
		delete base;
	}
	{
		srand(time(NULL));
		Base	*base = new Base();

		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[If the derived class is not derived from \"Base\"]" << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "The base *p is ";
		identify(base);
		std::cout << std::endl;

		delete base;
	}
	return (0);
}
