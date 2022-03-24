/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 00:37:15 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 01:49:37 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//	Default constructor
Intern::Intern(void) {}

//	Destructor
Intern::~Intern(void) {}

//	Copy Constructor
Intern::Intern(const Intern &copy) { *this = copy; }

//	Atribuidor do operador
Intern	&Intern::operator=(const Intern &copy) {
	(void)copy;
	return (*this);
}

//	Excessão para Formulario não encontrado
const char	*Intern::FormNotFoundException::what() const throw() { return ("Exception - Form not found."); }

//	Quando o Estagiário tem de trabalhar
Form		*Intern::makeForm(std::string formName, std::string target) {
	std::string		forms[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };

	Form	*form[3] = { new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target) };
	int		i = 0;
	int		index = -1;
	while (i < 3) {
		if (formName == forms[i]) {
			std::cout << "Intern creates " << formName << "." << std::endl;
			index = i;
		} else
			delete form[i];
		i++;
	};
	if (index == -1)
		throw Intern::FormNotFoundException();
	return (form[index]);
}