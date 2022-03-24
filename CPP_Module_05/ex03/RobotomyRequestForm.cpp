/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:00:39 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 01:53:02 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

std::string const	&RobotomyRequestForm::name = std::string("Robotomy");

//	Default constructor
RobotomyRequestForm::RobotomyRequestForm(void) {}

//	Cosntructor com inicialização de parametros
RobotomyRequestForm::RobotomyRequestForm(std::string const &_target): Form(RobotomyRequestForm::name, 72, 45), target(_target) {}

//	Destructor
RobotomyRequestForm::~RobotomyRequestForm(void) {}

//	Copy Constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form(copy), target(copy.target) {}

//	Atribuidor do operador
RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	(void)copy;
	return (*this);
}

//	executor
void		RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	std::string		status;
	std::cout << "Making noises: * LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	status = (std::rand() % 2) ? "successfull." : "a failure.";
	std::cout << this->target << " Robotomy process was " << status <<std::endl;
}
