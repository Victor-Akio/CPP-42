/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:27:47 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/17 03:14:19 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//	Construtor para o Dogo
Dog::Dog(void) {
	Dog::type = "Dalmata";
	std::cout << Dog::type << ": Default Constructor Called." << std::endl;
}

//	Destructor 
Dog::~Dog(void) { std::cout << Dog::type << ": Destructor Called." << std::endl; }

//	Copy Constructor
Dog::Dog(Dog const &obj): Animal(obj) {
	std::cout << Dog::type << ": Copy Constructor Called." << std::endl;
	*this = obj;
}

//	Atribuir operador
Dog	&Dog::operator=(Dog const &obj) {
	(void)obj;
	return (*this);
}

//	um Dogo deveria fazer Bark...
void	Dog::makeSound(void) const { std::cout << Dog::type << " goes Bark  Bark!!" << std::endl; }
