/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testsrobotomy copy.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:56:53 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 00:16:21 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

void	robotomyTests(void) {
	{
		Bureaucrat				bureaucrat("Caio", 1);
		std::cout << bureaucrat << std::endl;
		Form					*rrf = new RobotomyRequestForm("Home");
		std::cout << *rrf <<std::endl;
		rrf->beSigned(bureaucrat);
		std::cout << *rrf <<std::endl;
		rrf->execute(bureaucrat);
		std::cout << *rrf <<std::endl;
		std::cout << "------------------------------------------------------\n" << std::endl;
		bureaucrat.executeForm(*rrf);

		delete rrf;
	}
}

void	robotomyExceptions(void) {
	{
		std::cout << "[Low Execution Grade....]" << std::endl;
		Form		*rrf = new RobotomyRequestForm("Home");
		Bureaucrat	bureaucrat("Gadino", 149);
		try {
			rrf->beSigned(bureaucrat);
			std::cout << *rrf <<std::endl;
			rrf->execute(bureaucrat);
			std::cout << *rrf <<std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		delete rrf;
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
	{
		std::cout << "[Lower Sign Grade....]" << std::endl;
		Form		*rrf = new RobotomyRequestForm("Home");
		Bureaucrat	bureaucrat("Gadino", 149);
		try {
			rrf->beSigned(bureaucrat);
			std::cout << *rrf <<std::endl;
			rrf->execute(bureaucrat);
			std::cout << *rrf <<std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		delete rrf;
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
	{
		std::cout << "[Not signed form]" << std::endl;
		Form		*rrf = new RobotomyRequestForm("Luigi");
		Bureaucrat	bureaucrat("Rafa", 1);
		std::cout << *rrf <<std::endl;
		try {
			rrf->execute(bureaucrat);
			std::cout << *rrf <<std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		delete rrf;
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
}
