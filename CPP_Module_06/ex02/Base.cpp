/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 06:57:54 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/28 07:18:26 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void) {

}

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

void	identify(Base &p) {
	try {
		A	&a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch(...) {}
	try {
		B	&b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch(...) {}
	try {
		C	&c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch(...) {}
}
