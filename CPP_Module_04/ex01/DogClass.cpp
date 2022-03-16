/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:27:47 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 02:20:45 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"

Dog::Dog(void) {
	Dog::type = "Dalmata";
	std::cout << Dog::type << ": Default Constructor Called." << std::endl;
}

Dog::~Dog(void) { std::cout << Dog::type << ": Destructor Called." << std::endl; }

Dog::Dog(Dog const &obj): Animal(obj) {
	std::cout << Dog::type << ": Copy Constructor Called." << std::endl;
	*this = obj;
}

Dog	&Dog::operator=(Dog const &obj) {
	(void)obj;
	return (*this);
}

void	Dog::makeSound(void) const { std::cout << Dog::type << " goes Bark  Bark!!" << std::endl; }
