/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testspresidential copy.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:56:53 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 00:16:21 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

void	presidentialTests(void) {
	{
		Bureaucrat				bureaucrat("Caio", 1);
		std::cout << bureaucrat << std::endl;
		Form					*ppf = new PresidentialPardonForm("Adrian");
		std::cout << *ppf <<std::endl;
		ppf->beSigned(bureaucrat);
		std::cout << *ppf <<std::endl;
		ppf->execute(bureaucrat);
		std::cout << *ppf <<std::endl;
		std::cout << "------------------------------------------------------\n" << std::endl;
		bureaucrat.executeForm(*ppf);

		delete ppf;
	}
}

void	presidentialExceptions(void) {
	{
		std::cout << "[Low Execution Grade....]" << std::endl;
		Form		*ppf = new PresidentialPardonForm("Home");
		Bureaucrat	bureaucrat("Gadino", 149);
		try {
			ppf->beSigned(bureaucrat);
			std::cout << *ppf <<std::endl;
			ppf->execute(bureaucrat);
			std::cout << *ppf <<std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		delete ppf;
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
	{
		std::cout << "[Lower Sign Grade....]" << std::endl;
		Form		*ppf = new PresidentialPardonForm("Home");
		Bureaucrat	bureaucrat("Gadino", 149);
		try {
			ppf->beSigned(bureaucrat);
			std::cout << *ppf <<std::endl;
			ppf->execute(bureaucrat);
			std::cout << *ppf <<std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		delete ppf;
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
	{
		std::cout << "[Not signed form]" << std::endl;
		Form		*ppf = new PresidentialPardonForm("Luigi");
		Bureaucrat	bureaucrat("Rafa", 1);
		std::cout << *ppf <<std::endl;
		try {
			ppf->execute(bureaucrat);
			std::cout << *ppf <<std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		delete ppf;
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
}
