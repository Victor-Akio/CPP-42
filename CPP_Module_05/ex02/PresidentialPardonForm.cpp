/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:45:23 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 00:34:15 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

std::string const	&PresidentialPardonForm::name = std::string("PresPardon");

//	Default constructor
PresidentialPardonForm::PresidentialPardonForm(void) {}

//	Cosntructor com inicialização de parametros
PresidentialPardonForm::PresidentialPardonForm(std::string const &_target): Form(PresidentialPardonForm::name, 25, 5), target(_target) {
	std::cout << "[PresidentialPardonForm Constructor called]" << std::endl;
}

//	Destructor
PresidentialPardonForm::~PresidentialPardonForm(void) { std::cout << "[PresidentialPardonForm Destructor called.]" << std::endl; }

//	Copy Constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form(copy), target(copy.target) {
	std::cout << "[PresidentialPardonForm Copy Constructor called.]" << std::endl;
}

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
