/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:10:33 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 00:34:02 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string const	&ShrubberyCreationForm::name = std::string("Shrubbery");

//	Default constructor
ShrubberyCreationForm::ShrubberyCreationForm(void) {}

//	Cosntructor com inicialização de parametros
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &_target): Form(ShrubberyCreationForm::name, 145, 137), target(_target) {
	std::cout << "[ShrubberyCreationForm Constructor called]" << std::endl;
}

//	Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(void) { std::cout << "[ShrubberyCreationForm Destructor called.]" << std::endl; }

//	Copy Constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form(copy), target(copy.target) {
	std::cout << "[ShrubberyCreationForm Copy Constructor called.]" << std::endl;
}

//	Atribuidor do operador
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy){
	(void)copy;
	return (*this);
}

//	exception de problemas com arquivo
const char	*ShrubberyCreationForm::InvalidFileException::what() const throw() { return ("Exception - Problem in outFile inicialization"); }

//	executor
void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	std::ofstream		outfile((this->target + "_shrubbery").c_str());

	if (!outfile.is_open() || outfile.bad())
		throw ShrubberyCreationForm::InvalidFileException();
	outfile << "               ,@@@@@@@," << std::endl;
	outfile << "      ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	outfile << "    ,&\%\%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	outfile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	outfile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	outfile << "   %&&%/ %&\%\%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	outfile << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	outfile << "       |o|        | |         | |" << std::endl;
	outfile << "       |.|        | |         | |" << std::endl;
	outfile << "jgs  \\/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_" << std::endl;
	outfile.close();
}
