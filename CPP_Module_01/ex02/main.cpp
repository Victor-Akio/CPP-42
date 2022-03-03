/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:11:14 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/03 19:27:36 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* POINTER VS REFERENCE
**	Onde o ponteiro carrega um endereço e uma referencia seu valor.
**	https://magodo.github.io/array-string-pointer-reference/
*/
int		main(void) {
	std::string		str = "HI THIS IS BRAIN!";
	std::string		*strPTR = &str;
	std::string		&strREF = str;
	
	std::cout << "The memory address for str is: " << &str << std::endl;
	std::cout << "The memory address for strPTR is: " << strPTR << std::endl;
	std::cout << "The memory address for strREF is: " << &strREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the str var: " << str << std::endl;
	std::cout << "The value of the strPTR var: " << *strPTR << std::endl;
	std::cout << "The value of the strREF var: " << strREF << std::endl;
	return (0);
}
