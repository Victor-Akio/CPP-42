/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/30 19:47:53 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

bool isNumber(const std::string &s)
{
	int	i = 0;
	while (s[i]) {
		if (!std::isdigit(s[i])) {
			return false;
		}
		i++;
	}	
	return true;
}

void	standardTests(void) {
	{
		std::cout << "[PDF tests...]" << std::endl;
		try {
			Span sp = Span(5);
			sp.addNumber(9);
			sp.addNumber(3);
			sp.addNumber(6);
			sp.addNumber(11);
			sp.addNumber(17);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "------------------------------------------------------" << std::endl;
	{
		std::cout << "[Only one number in Span - exception]" << std::endl;
		try {
			Span sp = Span(1);
			sp.addNumber(9);
			std::cout << sp.shortestSpan() << std::endl;
		} catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "------------------------------------------------------" << std::endl;
	{
		std::cout << "[No spam - exception]" << std::endl;
		try {
			Span sp = Span(0);
			std::cout << sp.longestSpan() << std::endl;
		} catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "------------------------------------------------------" << std::endl;
	{
		std::cout << "[More numbers than spam - Exception]" << std::endl;
		try {
			Span sp = Span(4);
			sp.addNumber(606);
			sp.addNumber(6666);
			sp.addNumber(666);
			sp.addNumber(66);
			sp.addNumber(6);
		} catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "------------------------------------------------------" << std::endl;
}

void	invArg(void) {
	std::cout << "Please, use the following syntax: \"./span default\"" << std::endl;
	std::cout << "or use an number that will be the size of the storage generated: \"./spam <size>\"" << std::endl;
	std::cout << "The max size accepted is the INT_MAX, but it will take a while to end the simulation." << std::endl;
}

void	sizeTest(unsigned int size) {
	try {
		std::cout << "[An storage of " << size << " integers was created]" << std::endl;
		srand((unsigned)time(NULL));
		
		Span				span = Span(size);
		std::vector<int>	tmp;
		for (unsigned int i = 0; i < size; i++)
			tmp.push_back(rand() % 10000);
		span.addNumber(tmp.begin(), tmp.end());
		std::cout << "[With all set, than the shortest span is...]" << std::endl;
		std::cout << span.shortestSpan() << std::endl;
		std::cout << "[and the longest span is...]" << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
		//	Eu recomendo remoção para testes maiores
		std::cout << "[Your call - Print the storage.]" << std::endl;
		std::cout << "Storage: [";
		unsigned int	len = tmp.size();
		for (unsigned int i = 0; i < (len - 1); i++) {
			std::cout << tmp[i] << ", ";
		}
		std::cout << tmp[len - 1] << "]" << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

int		argParser(char *arg) {
	std::string basics = "default";
	
	if (basics == arg)
		standardTests();
	else {
		if (isNumber(arg)) {
			unsigned int	x = (unsigned int)std::atoi(arg);
			sizeTest(x);
		} else {
			std::cout << "Error - Not a Number or \"default\"." << std::endl;
			invArg();
			return (1);
		}
	}
	return (0);
}

int		main(int ac, char **av) {
	srand(time(NULL));
	
	if (ac != 2) {
		std::cout << "Error - Wrong number of arguments." << std::endl;
		invArg();
		return (1);
	} else
		argParser(av[1]);
	return (0);
}
