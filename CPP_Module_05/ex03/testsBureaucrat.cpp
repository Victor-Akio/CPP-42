/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testsBureaucrat.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:56:53 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 23:46:33 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

void	bureaucratTests(void) {
	{
		std::cout << "[Simple Tests for Simple problems]\n" << std::endl;
		Bureaucrat John("John", 2);
		std::cout << John << std::endl;
		John.increaseGrade();
		std::cout << John << std::endl;
		John.decreaseGrade();
		std::cout << John << std::endl;
		John.changeGrade(-15);
	}
}

void	bureaucratExceptions(void) {
	{
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[Respects when Trying to Catch a Cat]" << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[Zero! Above the best!]\n" << std::endl;
		try {
			Bureaucrat bureaucrat("Zero", 0);
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[Lower than the ground?]\n" << std::endl;
		try {
			Bureaucrat bureaucrat("Lowie", 151);
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[Even bestowing the best?]\n" << std::endl;
		Bureaucrat bureaucrat("Uno", 1);
		std::cout << bureaucrat;
		try {
			bureaucrat.increaseGrade();
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[Or decreasing more than the least?]\n" << std::endl;
		Bureaucrat bureaucrat("Drowner", 150);
		std::cout << bureaucrat << std::endl;
		try {
			bureaucrat.decreaseGrade();
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[Skyrocket?]\n" << std::endl;
		Bureaucrat bureaucrat("SuperStar", 150);
		try {
			bureaucrat.changeGrade(151);
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[Last one, should be exception too]\n" << std::endl;
		Bureaucrat bureaucrat("SuperStar", 1);
		try {
			bureaucrat.changeGrade(-1000);
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
	}
}
