/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exUm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:01:06 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/22 19:14:32 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

void	ex01(void) {
	{
		std::cout << "[Creating a Bureaucrat and a Form]" << std::endl;
		Bureaucrat	bureaucrat("Gariadno", 100);
		std::cout << bureaucrat << std::endl;
		Form	form1("Tributes", 100, 50);
		std::cout << form1 << std::endl;
		std::cout << "[Signing the form]" << std::endl;
		form1.beSigned(bureaucrat);
		std::cout << form1 << std::endl;
		std::cout << "------------------------------------------------------\n" << std::endl;
		std::cout << "[Generating another form]" << std::endl;
		Form	form2("Setup", 99, 50);
		std::cout << form2 << std::endl;
		std::cout << "[When The Sign grade is too low]" << std::endl;
		try {
			bureaucrat.signForm(form2);
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << form2 << std::endl;
		std::cout << "------------------------------------------------------\n" << std::endl;
		std::cout << "[When the Sign Grade is higher than the bureaucrat's grade]" << std::endl;
		Form	form3("New Typeform", 120, 50);
		std::cout << form3 << std::endl;
		std::cout << "[Signing the form]" << std::endl;
		try {
			bureaucrat.signForm(form3);
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << form3 << std::endl;
		std::cout << "------------------------------------------------------\n" << std::endl;
		std::cout << "[If it is already signed]" << std::endl;
		std::cout << "[Signing New Typeform again]" << std::endl;
		try {
			bureaucrat.signForm(form3);
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << form3 << std::endl;
		std::cout << "------------------------------------------------------\n" << std::endl;
		std::cout << "Now destroy!!!" << std::endl;
	}
	std::cout << "------------------------------------------------------\n" << std::endl;
	{
		std::cout << "[Low Execution Grade....]" << std::endl;
		try {
			Form	form("Exceptions", 100, 151);
			std::cout << form << std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
	{
		std::cout << "[Higher Execution Grade....]" << std::endl;
		try {
			Form	form("Exception", 100, 0);
			std::cout << form << std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
	{
		std::cout << "[Lower Sign Grade....]" << std::endl;
		try {
			Form	form("Exception", 151, 50);
			std::cout << form << std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
	{
		std::cout << "[Higher Sign Grade....]" << std::endl;
		try {
			Form	form("Exception", 0, 50);
			std::cout << form << std::endl;
		} catch(std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
}
