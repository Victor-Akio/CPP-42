/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:36:57 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 18:25:30 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//	Construtor padrão com alocação de um Brain
Cat::Cat(void) {
	Cat::type = "StrayCat";
	Cat::brain = new Brain();
	std::cout << Cat::type << ": Default Constructor Called." << std::endl;
}

//	Destructor liberando o Brain
Cat::~Cat(void) {
	std::cout << Cat::type << ": Destructor Called." << std::endl;
	delete brain;
}

//	Copy Constructor com alocação (deep copy)
Cat::Cat(Cat const &obj): Animal(obj) {
	Cat::brain = new Brain();
	*this = obj;
}

//	Assign operator com segurança
Cat	&Cat::operator=(Cat const &obj) {
	if (this != &obj) {
		this->type = obj.type;
		if (!(this->brain))
			this->brain = new Brain();
		*(this->brain) = *(obj.brain);
	}
	return (*this);
}

//	Um gato deveria fazer Meown
void		Cat::makeSound(void) const { std::cout << Cat::type << " goes Meown Meown!!" << std::endl; }

//	Setters e Getters para lidar com as ideias.
void		Cat::setBrainIdeas(int index, std::string obj) { this->brain->setIdeas(index, obj); }
std::string	Cat::getBrainIdeas(int index) const { return (this->brain->getIdeas(index)); }

