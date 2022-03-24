/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:45:23 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 01:53:26 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

std::string const	&PresidentialPardonForm::name = std::string("PresPardon");

//	Default constructor
PresidentialPardonForm::PresidentialPardonForm(void) {}

//	Cosntructor com inicialização de parametros
PresidentialPardonForm::PresidentialPardonForm(std::string const &_target): Form(PresidentialPardonForm::name, 25, 5), target(_target) {}

//	Destructor
PresidentialPardonForm::~PresidentialPardonForm(void) {}

//	Copy Constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form(copy), target(copy.target) {}

//	Atribuidor do operador
PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
	(void)copy;
	return (*this);
}

//	executor
void		PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	std::cout << "Informs that " << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
