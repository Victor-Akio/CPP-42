/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:27:47 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 18:25:20 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//	Construtor padrão com alocação de um Brain
Dog::Dog(void) {
	Dog::type = "StrayDog";
	Dog::brain = new Brain();
	std::cout << Dog::type << ": Default Constructor Called." << std::endl;
}

//	Destructor liberando o Brain
Dog::~Dog(void) {
	std::cout << Dog::type << ": Destructor Called." << std::endl;
	delete Dog::brain;
}

//	Copy Constructor com alocação (deep copy)
Dog::Dog(Dog const &obj): Animal(obj) {
	Dog::brain = new Brain();
	*this = obj;
}

//	Assign operator com segurança
Dog	&Dog::operator=(Dog const &obj) {
	if (this != &obj) {
		this->type = obj.type;
		if (!(this->brain))
			this->brain = new Brain();
		*(this->brain) = *(obj.brain);
	}
	return (*this);
}

//	um Dogo deveria fazer Bark...
void		Dog::makeSound(void) const { std::cout << Dog::type << " goes Bark  Bark!!" << std::endl; }

//	Setters e Getters para lidar com as ideias.
void		Dog::setBrainIdeas(int index, std::string ideas) { this->brain->setIdeas(index, ideas); }
std::string	Dog::getBrainIdeas(int index) const { return (this->brain->getIdeas(index)); }

