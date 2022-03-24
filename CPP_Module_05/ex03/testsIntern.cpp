/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testsintern copy.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:56:53 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 00:16:21 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

void	internTests(void) {
	std::cout << "------------------------------------------------------\n" << std::endl;
	Intern					intern;
	Form		*ppf = intern.makeForm("presidential pardon", "Adrian");
	std::cout << *ppf << std::endl;
	std::cout << "------------------------------------------------------\n" << std::endl;
	Form		*scf = intern.makeForm("shrubbery creation", "42SP");
	std::cout << *scf << std::endl;
	std::cout << "------------------------------------------------------\n" << std::endl;
	Form		*rrf = intern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	std::cout << "------------------------------------------------------\n" << std::endl;

	delete ppf;
	delete scf;
	delete rrf;
}

void	internExceptions(void) {
	std::cout << "------------------------------------------------------\n" << std::endl;
	std::cout << "[Nooooo Forms found]" << std::endl;
	Intern					intern;
	Form		*notFound;
	try {
		notFound = intern.makeForm("Pass by Cheating", "Adrian");
		std::cout << *notFound << std::endl;
	} catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	delete notFound;
	std::cout << "------------------------------------------------------\n" << std::endl;
}
