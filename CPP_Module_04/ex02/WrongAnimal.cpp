/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 02:03:03 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 02:03:05 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//	Igual porém errado - Olhar atentamente o seu som.
WrongAnimal::WrongAnimal(void) {
	WrongAnimal::type = "Pikachu";
	std::cout << WrongAnimal::type << "/WrongAnimal: Default Constructor Called." << std::endl;
}

WrongAnimal::~WrongAnimal(void) { std::cout  << WrongAnimal::type << "/WrongAnimal: Destructor Called." << std::endl; }

WrongAnimal::WrongAnimal(WrongAnimal const &obj) {
	std::cout << WrongAnimal::type << "/WrongAnimal: Copy Constructor Called." << std::endl;
	(void)obj;
	*this = obj;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &obj) {
	(void)obj;
	return (*this);
}

std::string	WrongAnimal::getType(void) const { return (WrongAnimal::type); }

void		WrongAnimal::makeSound(void) const { std::cout << WrongAnimal::type << " goes PIIIIIIIKKaaA." << std::endl; }
