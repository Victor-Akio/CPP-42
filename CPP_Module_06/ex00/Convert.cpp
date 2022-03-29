/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:36:43 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/28 21:23:06 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// Orthodox Canonical Form Class
Convert::Convert(void) {}
Convert::~Convert(void) {}
Convert:: Convert(Convert const &copy) { *this = copy; }
Convert	&Convert::operator=(Convert const &copy) {
	(void)copy;
	return(*this);
}

/*
**	Conversores
*/

//	Converte uma string em char
void	Convert::convertChar(std::string arg) {
	try {
		if (arg[0] && arg.length() == 1 && isalpha(arg[0])) {
			std::cout << "char: \'" << arg << "\'" << std::endl;
			return ;
		} else if (arg.length() > 1 && isalpha(arg[1]))
			throw Convert::ImpossibleCharConversion();
		char c = static_cast<char>(std::atoi(arg.c_str()));
		if (isprint(c))
			std::cout << "char \'" << c << "\'" << std::endl;
		else
			std::cout << "char: Non displayble" << std::endl;
	} catch( const std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}

//	Conversor de uma string para inteiro
void	Convert::convertInt(std::string arg) {
	try {
		if ( arg[0] && arg.length() == 1 && isalpha(arg[0]) ) {
			std::cout << "int: " << static_cast<int>(arg[0]) << std::endl;
			return ;
		}
		long num = std::atol(arg.c_str());
		if (arg[0] != '0' && num == 0)
			throw Convert::ImpossibleIntConversion();
		if (!(num > INT_MAX) && !(num < INT_MIN))
			std::cout << "int: " << num << std::endl;
		else
			throw Convert::ImpossibleIntConversion();
	} catch (const std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}

//	converte uma string de número em float
void	Convert::convertFloat(std::string arg) {
	try {
		if ( arg[0] && arg.length() == 1 && isalpha(arg[0]) ) {
			std::cout << "float: " << static_cast<float>(arg[0]) << ".0f" << std::endl;
			return ;
		}
		float num = static_cast<float>(std::strtod(arg.c_str(), NULL));
		if (arg[0] != '0' && num == 0)
			throw Convert::NanFloatConversion();
		if (num == std::numeric_limits<float>::infinity())
			std::cout << "float: +inff" <<std::endl;
		else if ((long double)num == (int)num)
			std::cout << "float: " << num << ".0f" << std::endl;
		else
			std::cout << "float: " << num << "f" << std::endl;
	} catch (const std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}

//	Converte String num para double
void	Convert::convertDouble(std::string arg) {
	try {
		if ( arg[0] && arg.length() == 1 && isalpha(arg[0]) ) {
			std::cout << "double: " << static_cast<double>(arg[0]) << ".0" << std::endl;
			return ;
		}
		double num = static_cast<double>(std::strtod(arg.c_str(), NULL));
		if (arg[0] != '0' && num == 0)
			throw Convert::NanDoubleConversion();
		if (num == std::numeric_limits<float>::infinity())
			std::cout << "double: +inf" <<std::endl;
		else if ((long double)num == (int)num)
			std::cout << "double: " << num << ".0" << std::endl;
		else
			std::cout << "double: " << num << std::endl;
	} catch (const std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}

//	Função que chama as demais em ordem
void	Convert::conversor(std::string arg) {
	Convert::convertChar(arg);
	Convert::convertInt(arg);
	Convert::convertFloat(arg);
	Convert::convertDouble(arg);
}

//	Exceptions
const char	*Convert::ImpossibleCharConversion::what() const throw() { return ("char: impossible"); }
const char	*Convert::ImpossibleIntConversion::what() const throw() { return ("int: impossible"); }
const char	*Convert::NanFloatConversion::what() const throw() { return ("float: nanf"); }
const char	*Convert::NanDoubleConversion::what() const throw() { return ("double: nan"); }
