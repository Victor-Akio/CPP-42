/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:46:30 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/04 04:32:43 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

/* FIND and REPLACE
**	https://www.cplusplus.com/reference/string/string/replace/
**	https://www.cplusplus.com/reference/sstream/stringstream/
*/
std::string	sed(std::string line, std::string str1, std::string str2) {
	std::stringstream	ss;
	size_t				i = 0;
	size_t				j;
	size_t				slength(str1.length());
	
	while (i < line.length()) {
		j = 0;
		while (line[i + j] == str1[j] && j < slength)
			j++;
		if (j == slength) {
			ss << str2;
			i += (j - 1);
		} else 
			ss << line[i];
		i++;
	}
	return (ss.str());
}

/*	File Manager
**	https://www.cplusplus.com/doc/oldtutorial/files/
*/
int		main(int ac, char **av) {
	std::string		line;
	std::ofstream	output;
	
	if (ac != 4) {
		std::cout << "Wrong number of arguments." << std::endl;
		std::cout << "Please, use the following syntax to run the program:" << std::endl;
		std::cout << "\"./replace <./filename> <string to be replaced> <content to replace>\"." << std::endl;
		std::cout << "Keep in mind, that white_spaces without brackets (\"\"), won't be considered a string." << std::endl;
		return (1);
	} else {
		std::string			fileName = av[1];
		std::string			str1 = av[2];
		std::string			str2 = av[3];
		std::ifstream	file(av[1]);
		if (!file.is_open()) {
			std::cout << "The file \"" << fileName << "\" does not exist." << std::endl;
			return (1);
		}
		if (str1 == str2) {
			std::cout << "Same string to be replaced..." << std::endl;
			return (1);
		}
		output.open((fileName + ".replace").c_str(), std::ios::trunc);
		if (!output.is_open()) {
			std::cout << "Output file not open or created." << std::endl;
			return(1);
		}
		while (std::getline(file, line)) {
			output << sed(line, str1, str2);
			if (!file.eof()) {output << '\n';}
		}
		file.close();
		output.close();
	}
	return (0);
}
