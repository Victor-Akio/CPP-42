/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:20:44 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 02:50:05 by vminomiy         ###   ########.fr       */
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

//	Copy Constructor shallow
Animal::Animal(Animal const &obj) {
	std::cout << Animal::type << "/Animal: Copy Constructor Called." << std::endl;
	(void)obj;
	*this = obj;
}

//	Atribuir operador
Animal	&Animal::operator=(Animal const &obj) {
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

//	An Weird aniimal would make no sound?
void		Animal::makeSound(void) const { std::cout << Animal::type << " speaks like human" << std::endl; }

//	getters Para pegar Tipo do animal e A ideia
std::string	Animal::getType(void) const { return (Animal::type); }
std::string	Animal::getBrainIdeas(int index) const {
	(void)index;
	return ("Yay");
}

//	Setter para atribuir um pensamento
void		Animal::setBrainIdeas(int index, std::string obj) {
	(void)index;
	(void)obj;
}