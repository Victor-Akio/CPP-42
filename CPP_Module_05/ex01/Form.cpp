/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:59:35 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/22 17:33:41 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//	Private constructor
Form::Form(void):
	name("Gariadno"), signGrade(100), execGrade(75), isSigned(false) {
	std::cout << "[Form Default Constructor called.]" << std::endl;
}

//	Cosntructor com inicialização de parametros
Form::Form(std::string const &_name, int const _signGrade, int const _execGrade):
		name(_name), signGrade(_signGrade), execGrade(_execGrade), isSigned(false) {
	std::cout << "[Form Constructor called]" << std::endl;
	if (this->signGrade < HIGHEST_GRADE || this->execGrade < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	else if (this->signGrade > LOWEST_GRADE || this->execGrade > LOWEST_GRADE)
		throw Form::GradeTooLowException();
}

//	Destructor
Form::~Form(void) { std::cout << "[Form Destructor called.]" << std::endl; }

//	Copy Constructor
Form::Form(const Form &copy):
		name(copy.name), signGrade(copy.signGrade), execGrade(copy.execGrade), isSigned(copy.isSigned) {
	std::cout << "[Form Copy Constructor called.]" << std::endl;
	if (this->signGrade < HIGHEST_GRADE || this->execGrade < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	else if (this->signGrade > LOWEST_GRADE || this->execGrade > LOWEST_GRADE)
		throw Form::GradeTooLowException();
}

//	Atribuidor do operador
Form	&Form::operator=(const Form &copy){
	this->isSigned = copy.isSigned;
	return (*this);
}

//	Funções de Excessões
const char	*Form::GradeTooHighException::what() const throw() { return ("Exception - Grade too High!!"); }
const char	*Form::GradeTooLowException::what() const throw() { return ("Exception - Grade too Low!!"); }
const char	*Form::FormIsSIgnedException::what() const throw() { return ("Exception - Form is signed already!!"); }

//	Funções Getter
std::string const	&Form::getName(void) const { return (Form::name); }
int					Form::getSignGrade(void) const { return (Form::signGrade); }
int					Form::getExecGrade(void) const { return (Form::execGrade); }
bool				Form::getSigned(void) const { return (Form::isSigned); }

//	Funções de Operações
void	Form::beSigned(Bureaucrat const &copy) {
	if (copy.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	else if (this->isSigned == true)
		throw Form::FormIsSIgnedException();
	this->isSigned = true;
}

// Overload do operador <<
std::ostream	&operator<<(std::ostream &os, const Form &obj) {
	std::cout << obj.getName() << " - " << ((obj.getSigned()) ? "Signed." : "Unsigned.")
		<< "\nSignGrade: " << obj.getSignGrade() << " and ExecGrade: " << obj.getExecGrade()
		<< "." << std::endl;
	return (os);
}
