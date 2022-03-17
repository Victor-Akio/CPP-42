/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:36:57 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/17 03:14:58 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//	Construtor padrão
Cat::Cat(void) {
	Cat::type = "Maine Coon";
	std::cout << Cat::type << ": Default Constructor Called." << std::endl;
}

//	Destructor 
Cat::~Cat(void) { std::cout << Cat::type << ": Destructor Called." << std::endl; }

//	Copy Constructor
Cat::Cat(Cat const &obj): Animal(obj) {
	std::cout << Cat::type << ": Copy Constructor Called." << std::endl;
	*this = obj;
}

//	Atribuir Operador
Cat	&Cat::operator=(Cat const &obj) {
	(void)obj;
	return (*this);
}

//	Um gato deveria fazer Meown
void	Cat::makeSound(void) const { std::cout << Cat::type << " goes Meown Meown!!" << std::endl; }
