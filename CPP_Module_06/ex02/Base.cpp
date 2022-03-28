/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 06:57:54 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/28 20:46:45 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

//	Instancia aleatiriamente uma classe derivada da base
Base	*generate(void) {
	A		a;
	B		b;
	C		c;
	int		random = std::rand() % 3;

	if (random == 0)
		return (new A());
	else if (random == 1)
		return (new B());
	else
		return (new C());
}

/*	DYNAMIC CAST
**	https://en.cppreference.com/w/cpp/language/dynamic_cast
**	Identifica qual tipo de objeto pelo ponteiro
*/
void	identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "No Base found/ converted" << std::endl;
}

//	Identifica o tipo de objeto pelo endereço do ponteiro
void	identify(Base &p) {
	try {
		A	&a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	} catch(...) {}
	try {
		B	&b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	} catch(...) {}
	try {
		C	&c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	} catch(...) {}
}
