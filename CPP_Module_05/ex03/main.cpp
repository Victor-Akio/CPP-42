/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 01:27:40 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

void	invArg(void) {
	std::cout << "Please, use the following syntax: \"./forms <model_number>\"" << std::endl;
	std::cout << "Or use the flag \"-e\" to see the exceptions: \"./forms -e <Form_type>\"";
	std::cout << "Forms avalilable: bureaucrat, shrubbery, robotomy or presidential" << std::endl;
}

int		switchCase(int i, bool e) {
	switch (i) {
		case 0:
		{
			if (!e) {
				std::cout << "[El Bureaucrats tries things]" << std::endl;
				bureaucratTests();
			} else {
				std::cout << "[El Bureaucrats do weird things]" << std::endl;
				bureaucratExceptions();
			}
			return (0);
		}
		case 1:
		{
			if (!e) {
				std::cout << "[Shrubbery will be planted at]" << std::endl;
				shrubberyTests();
			} else {
				std::cout << "[Shrubbery has wrong behaviour]" << std::endl;
				shrubberyExceptions();
			}
			return (0);
		}
		case 2:
		{
			if (!e) {
				std::cout << "[Someone might get Robotomized]" << std::endl;
				robotomyTests();
			} else {
				std::cout << "[Robotomy does not happen]" << std::endl;
				robotomyExceptions();
			}
			return (0);
		}
		case 3:
		{
			if (!e) {
				std::cout << "[The president is giving pardon?]" << std::endl;
				presidentialTests();
			} else {
				std::cout << "[President does not care..]" << std::endl;
				presidentialExceptions();
			}
			return (0);
		}
		case 4:
		{
			if (!e) {
				std::cout << "[Intern does his job]" << std::endl;
				internTests();
			} else {
				std::cout << "[Someone will assume responsability]" << std::endl;
				internExceptions();
			}
			return (0);
		}
		default:
		{
			std::cout << "Error - Invalid argument." << std::endl;
			invArg();
			return (1);
		}
	}
	return (0);
}

int		argParser(char *arg, bool e) {
	int i = 0;
	int	x = 5;
	std::string	list[x] = {"bureaucrat", "shrubbery", "robotomy", "presidential", "intern"};
	
	while (i < x && list[i] != arg) i++;
	if (i > x) {
		std::cout << "Error - Invalid argument." << std::endl;
		invArg();
		return (1);
	}
	switchCase(i, e);
	return (0);
}

int		main(int ac, char **av) {
	srand( (unsigned)time(NULL) );
	std::string flag = "-e";

	if (ac < 2 || ac > 3) {
		std::cout << "Error - Wrong number of arguments." << std::endl;
		invArg();
		return (1);
	}
	if (ac == 2) {
		argParser(av[1], 0);
	} else if (ac == 3 && av[1] == flag) {
		argParser(av[2], 1);
	} else {
		std::cout << "Error - Invalid flag command." << std::endl;
		invArg();
		return (1);
	}
	return (0);
}
