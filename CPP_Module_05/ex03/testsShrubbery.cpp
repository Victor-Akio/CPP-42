/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testsShrubbery.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:56:53 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 00:19:16 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

void	shrubberyTests(void) {
	{
		Bureaucrat				bureaucrat("Caio", 1);
		std::cout << bureaucrat << std::endl;
		Form					*scf = new ShrubberyCreationForm("Home");
		std::cout << *scf <<std::endl;
		scf->beSigned(bureaucrat);
		// std::cout << *scf <<std::endl;
		// scf->execute(bureaucrat);
		std::cout << *scf <<std::endl;
		std::cout << "------------------------------------------------------\n" << std::endl;
		bureaucrat.executeForm(*scf);
		
		delete scf;
	}
}

void	shrubberyExceptions(void) {
	{
		std::cout << "[Low Execution Grade....]" << std::endl;
		Form		*scf = new ShrubberyCreationForm("Home");
		Bureaucrat	bureaucrat("Gadino", 149);
		try {
			scf->beSigned(bureaucrat);
			std::cout << *scf <<std::endl;
			scf->execute(bureaucrat);
			std::cout << *scf <<std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		delete scf;
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
	{
		std::cout << "[Lower Sign Grade....]" << std::endl;
		Form		*scf = new ShrubberyCreationForm("Home");
		Bureaucrat	bureaucrat("Gadino", 149);
		try {
			scf->beSigned(bureaucrat);
			std::cout << *scf <<std::endl;
			scf->execute(bureaucrat);
			std::cout << *scf <<std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		delete scf;
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
	{
		std::cout << "[Not signed form]" << std::endl;
		Form		*scf = new ShrubberyCreationForm("Home");
		Bureaucrat	bureaucrat("Rafa", 1);
		std::cout << *scf <<std::endl;
		try {
			scf->execute(bureaucrat);
			std::cout << *scf <<std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		delete scf;
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
}
