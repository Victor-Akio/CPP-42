/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:20:44 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/17 03:13:22 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//	Construtor padrão
Animal::Animal(void) {
	Animal::type = "Harl";
	std::cout << Animal::type << "/Animal: Default Constructor Called." << std::endl;
}

//	Destrutor
Animal::~Animal(void) { std::cout << Animal::type << "/Animal: Destructor Called." << std::endl; }

//	Copy Constructor
Animal::Animal(Animal const &obj) {
	std::cout << Animal::type << "/Animal: Copy Constructor Called." << std::endl;
	(void)obj;
	*this = obj;
}

//	Atribuir operador
Animal	&Animal::operator=(Animal const &obj) {
	(void)obj;
	return (*this);
}

//	getter para Tipo de animal
std::string	Animal::getType(void) const { return (Animal::type); }

//	An Weird aniimal would make no sound?
void		Animal::makeSound(void) const { std::cout << Animal::type << " speaks like human" << std::endl; }
