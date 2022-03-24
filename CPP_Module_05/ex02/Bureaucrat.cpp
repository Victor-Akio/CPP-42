/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:45:52 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 00:34:57 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//	Private constructor
Bureaucrat::Bureaucrat(void) { std::cout << "[Bureaucrat Default Constructor called.]" << std::endl; }

//	Cosntructor com inicialização de parametros
Bureaucrat::Bureaucrat(std::string const &_name, int _grade): name(_name), grade(_grade) {
	std::cout << "[Bureaucrat Constructor called]" << std::endl;
	if (this->grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

//	Destructor
Bureaucrat::~Bureaucrat(void) { std::cout << "[BureaucratDestructor called.]" << std::endl; }

//	Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name), grade(copy.grade)  {
	std::cout << "[Bureaucrat Copy Constructor called.]" << std::endl;
	if (this->grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

//	Atribuidor do operador
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy){
	this->grade = copy.grade;
	return (*this);
}

//	Funções de Excessões
const char	*Bureaucrat::GradeTooHighException::what() const throw() { return ("Exception - Grade too High!!"); }
const char	*Bureaucrat::GradeTooLowException::what() const throw() { return ("Exception - Grade too Low!!"); }

//	Funções Getter
std::string const	&Bureaucrat::getName(void) const { return (Bureaucrat::name); }
int					Bureaucrat::getGrade(void) const { return (Bureaucrat::grade); }

//	Funções de Operações
void	Bureaucrat::increaseGrade(void) {
	std::cout << "Congrats, " << this->name << " increased it's rank by 1." << std::endl;
	this->grade--;
	if (this->grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decreaseGrade(void) {
	std::cout << "Sorry" << this->name << " decreased one position of the rank." << std::endl;
	this->grade++;
	if (this->grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::changeGrade(int	ranks) {
	this->grade = this->grade - (ranks);
	std::cout << this->name << " attempt to change its rank to " << this->grade << "." << std::endl;
	if (this->grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
}

//	Assina um formulario
void	Bureaucrat::signForm(Form &form) const {
	if (form.getSigned())
		std::cout << "Form already signed." << std::endl;
	else if (form.getSignGrade() < this->grade)
		std::cout << "Signgrade is Too Low to sign this form." << std:: endl;
	else
		std::cout << "Form Signed!" << std::endl;
	form.beSigned(*this);
}

//	executa um formulário
void	Bureaucrat::executeForm(Form const &form) const {
	if (!form.getSigned()) {
		std::cout << *this << " cannot execute the following form: " << form << std::endl;
		std::cout << "Form is not yet signed." << std::endl;
	} else if (form.getExecGrade() < this->grade) {
		std::cout << *this << " cannot execute the following form: " << form << std::endl;
		std::cout << "It's grade too low." << std::endl;
	} else {
		std::cout << *this << " executes the following form: " << form << std::endl;
		std::cout << "Form executed Successfully." << std::endl;
	}
	form.execute(*this);
}

// Overload do operador <<
std::ostream	&operator<<(std::ostream &os, const Bureaucrat &copy) {
	std::cout << copy.getName() << ", bureaucrat grade " << copy.getGrade() << "." << std::endl;
	return (os);
}
