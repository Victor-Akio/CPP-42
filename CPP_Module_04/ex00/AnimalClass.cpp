/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:20:44 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 02:49:58 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"

Animal::Animal(void) {
	Animal::type = "Harl";
	std::cout << Animal::type << "/Animal: Default Constructor Called." << std::endl;
}

Animal::~Animal(void) { std::cout << Animal::type << "/Animal: Destructor Called." << std::endl; }

Animal::Animal(Animal const &obj) {
	std::cout << Animal::type << "/Animal: Copy Constructor Called." << std::endl;
	(void)obj;
	*this = obj;
}

Animal	&Animal::operator=(Animal const &obj) {
	(void)obj;
	return (*this);
}

std::string	Animal::getType(void) const { return (Animal::type); }

void		Animal::makeSound(void) const { std::cout << Animal::type << " speaks like human" << std::endl; }
